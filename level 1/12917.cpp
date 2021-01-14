#include <string>
#include <vector>
#include <algorithm>

using namespace std;
bool cmp(char &c1, char &c2);

string solution(string s) {    
    sort(s.begin(), s.end(), cmp);
    
    return s;
}

bool cmp(char &c1, char &c2)
{
    char cmp1 = c1 >= 'A' ? c1 : c1 + 1000;
    char cmp2 = c2 >= 'A' ? c2 : c2 + 1000;
    
    return cmp1 > cmp2;
}