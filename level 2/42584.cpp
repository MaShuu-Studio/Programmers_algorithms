#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> prices) {
    vector<int> answer;
    
    for (int i = 0; i < prices.size() - 1; i++)
    {
        int index = i;
        while (index < prices.size() && prices[i] <= prices[index++]);
        answer.push_back(index - i - 1);
    }
    answer.push_back(0);
    return answer;
}