#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct S_String
{
    string str;
    char c;
};

bool cmp(S_String &s1, S_String &s2);
vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
    vector<S_String> s_str;
    
    for (int i = 0; i < strings.size(); i++)
    {
        S_String tmp;
        tmp.str = strings[i];
        tmp.c = strings[i][n];
        
        s_str.push_back(tmp);
    }
    
    sort(s_str.begin(), s_str.end(), cmp);
    
    for (int i = 0; i < s_str.size(); i++)
        answer.push_back(s_str[i].str);
    
    return answer;
}

bool cmp(S_String &s1, S_String &s2)
{
    if (s1.c < s2.c) return true;
    else if (s1.c == s2.c && s1.str < s2.str) return true;
    return false;
}