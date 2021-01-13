#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    
    vector<int> box;
    
    for (int i = 0; i < moves.size(); i++)
    {
        for (int j = 0; j < board.size(); j++)
        {
            if (board[j][moves[i]-1] != 0)
            {
                box.push_back(board[j][moves[i]-1]);
                board[j][moves[i]-1] = 0;
                if(box.size() > 1 && box[box.size() - 1] == box[box.size() - 2])
                {
                    answer += 2;
                    box.pop_back();
                    box.pop_back();                    
                }
                break;
            } 
        }
    }
    
    
    return answer;
}