#include <string>
#include <vector>

using namespace std;

char change(char c, int a);
string solution(string s) {
    string answer = "";
    int a = 1;
    for (int i = 0; i < s.length(); i++)
    {
        char c;
        
        if (s[i] == ' ')
        {
            c = ' ';
            a = 0;
        }else c = change(s[i], a);
        answer += c;
        a++;
    }        
    return answer;
}

char change(char c, int a)
{
    bool small = c >= 'a' ? true : false;
    c -= small ? 'a' : 'A';
    c %= 26;
    
    if (a % 2 == 0) c += 'a';
    else c += 'A';
    
    return c;
}