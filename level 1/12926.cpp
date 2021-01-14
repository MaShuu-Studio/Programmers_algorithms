#include <string>
#include <vector>

using namespace std;

char push(char c, int n);
string solution(string s, int n) 
{
    string answer = "";
    
    for (int i = 0; i < s.length(); i++)
        answer += push(s[i], n);
    
    return answer;
}

char push(char c, int n)
{
    if (c == ' ') return c;
    
    bool small = (c >= 'a')? true: false;
    c += n;
    c -= small ? 'a' : 'A';
    c %= 26;
    c += small ? 'a' : 'A';
    
    return c;
}