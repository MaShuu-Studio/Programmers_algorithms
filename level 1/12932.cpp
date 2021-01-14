#include <string>
#include <vector>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    
    string str = to_string(n);
    int len = str.length();
    
    for (int i = 0; i < len; i++)
    {
        answer.push_back(str.back() - '0');
        str.pop_back();
    }        
    
    return answer;
}