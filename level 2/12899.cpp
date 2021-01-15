#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(int n) {
    string answer = "";
    while(n > 0)
    {
        answer += to_string(n%3);
        n /= 3;
    }
    
    for (int i = 0; i < answer.length()-1; i++)
    {
        if (answer[i] == '0' && answer[i+1] != '0')
        {
            answer[i] = '4';
            answer[i+1] -= 1;
        }
    }
    
    if (answer[answer.length()-1] == '0')
        answer.pop_back();
    
    reverse(answer.begin(), answer.end());
    return answer;
}