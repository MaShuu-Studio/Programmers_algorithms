#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    
    int len = s.length();
    
    if (len == 4 || len == 6)
    {
        for (int i = 0; i < len; i++)
            if (s[i] < '0' || s[i] > '9') return false;  
        return true;
    }
    
    return false;
}