#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

string solution(vector<int> numbers, string hand) {
    string answer = "";
    
    int lpos = 9;
    int rpos = 11;
    
    for (int i = 0; i < numbers.size(); i++)
    {
        int a = (numbers[i]-1) / 3;
        int b = (numbers[i]-1) % 3;
        if (numbers[i] == 0)
        {
            a = 3;
            b = 1;
        }
        if (b == 0)
        {
            lpos = a * 3 + b;
            answer += "L";
        }
        else if (b == 2)
        {
            rpos = a * 3 + b;
            answer += "R";
        }
        else
        {
            int ld = abs(lpos/3 - a) + abs(lpos%3 - b);
            int rd = abs(rpos/3 - a) + abs(rpos%3 - b);
            
            if (ld == rd)
            {
                if (hand == "left")
                {
                    lpos = a * 3 + b;
                    answer += "L";
                }
                else
                {
                    rpos = a * 3 + b;
                    answer += "R";
                }
            }
            else if (ld < rd)
            {
                lpos = a * 3 + b;
                answer += "L";
            }
            else
            {
                rpos = a * 3 + b;
                answer += "R";
            }
        }
    }
    return answer;
}