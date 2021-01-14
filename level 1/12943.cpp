#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int num) {
    int answer = 0;
    long long n = num;
    
    while (n != 1)
    {
        if (answer >= 500)
        {
            answer = -1;
            break;
        }
        n = (n % 2 == 0 ? n/2 : n*3 + 1);
        
        answer++;
    }
    return answer;
}