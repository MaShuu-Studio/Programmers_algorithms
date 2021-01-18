#include <vector>

using namespace std;

vector<vector<bool>> selected;
vector<vector<int>> colors;
int w;
int h;
// 전역 변수를 정의할 경우 함수 내에 초기화 코드를 꼭 작성해주세요.
int color_amount(int color, int i, int j);
vector<int> solution(int m, int n, vector<vector<int>> picture) {
    
    vector<bool> tmp(n, false);
    selected.assign(m, tmp);
    colors.assign(picture.begin(), picture.end());
    h = m;
    w = n;
    
    int number_of_area = 0;
    int max_size_of_one_area = 0;
    
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            int color = colors[i][j];
            if (color == 0) continue;
            
            int amount = color_amount(color, i, j);       
            if (amount != 0) number_of_area++;
            if (max_size_of_one_area < amount) max_size_of_one_area = amount;
        }
    
    vector<int> answer(2);
    answer[0] = number_of_area;
    answer[1] = max_size_of_one_area;
    return answer;
}

int color_amount(int color, int i, int j)
{
    if (i >= 0 && j >= 0 && i < h && j < w && selected[i][j] == false)
    {
        if (colors[i][j] == color){
            selected[i][j] = true;
            return 1 + color_amount(color, i-1, j) + color_amount(color, i+1, j) + color_amount(color, i, j-1) + color_amount(color, i, j+1);
        }
    }
    return 0;
}