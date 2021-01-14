#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int a = 1;
    
    if (s[0] == '+') s = s.substr(1, s.length());
    else if (s[0] == '-')
    {
        s = s.substr(1, s.length());
        a = -1;
    }
    
    return stoi(s) * a;
}