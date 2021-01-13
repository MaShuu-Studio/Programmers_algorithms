#include <string>
#include <stack>
#include <iostream>
using namespace std;

int solution(int n) {
    int answer = 0;
    stack<int> val;
    
    while(n > 0)
    {
        val.push(n % 3);
        n = n / 3;
    }
    
    int mul = 1;
    while (val.empty() == false)
    {
        answer += mul * val.top();
        val.pop();
        mul *= 3;
    }
    
    return answer;
}