#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(int n) {
    string answer = "";
    while(n > 0)
    {
        int r = n % 3;
        n /= 3;

        if (r == 0)
        {
            n--;
            answer = "4" + answer;
        }
        else answer = to_string(r) + answer;
    }
    return answer;
}