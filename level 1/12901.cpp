#include <string>
#include <vector>

using namespace std;

int monthday(int);
string solution(int a, int b) {
    string answer = "";
    int day = 5 - 1;
    
    for (int i = 1; i < a; i++)
    {
        day += monthday(i);
    }
    day += b;
    day %= 7;
    
    switch (day)
    {
        case 0: return "SUN";
        case 1: return "MON";
        case 2: return "TUE";
        case 3: return "WED";
        case 4: return "THU";
        case 5: return "FRI";
        case 6: return "SAT";
    }
    
    return answer;
}

int monthday(int n)
{
    switch(n)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10: return 31;
        case 2: return 29;
        default: return 30;            
    }
}