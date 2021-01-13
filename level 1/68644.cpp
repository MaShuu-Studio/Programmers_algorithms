#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    
    for (int i = 0; i < numbers.size(); i++)
        for (int j = 0; j < numbers.size(); j++)
        {
            if (i == j) continue;
            int num = numbers[i] + numbers[j];            
            vector<int>::iterator iter = find(answer.begin(), answer.end(), num);
            
            if (iter == answer.end()) answer.push_back(num);
        }
    sort(answer.begin(), answer.end());
    return answer;
}