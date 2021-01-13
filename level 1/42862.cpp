#include <string>
#include <vector>
#include <cstdlib>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = n - lost.size();
    
    sort(lost.begin(), lost.end());
    sort(reserve.begin(), reserve.end());
        
    for (int i = 0; i < lost.size(); i++){
        for (int j = 0; j < reserve.size(); j++)
        {
            if (lost[i] == reserve[j])
            {
                lost.erase(lost.begin() + i);
                reserve.erase(reserve.begin() + j);
                answer++;
                i--;
                break;
            } 
        }
    }    
    
    for (int i = 0; i < lost.size(); i++)
    {
        for (int j = 0; j < reserve.size(); j++)
        {
            int diff = abs(lost[i] - reserve[j]);
            if (diff <= 1)
            {
                answer++;
                reserve.erase(reserve.begin() + j);
                break;
            }
            else if(reserve[j] > lost[i] && diff > 1) break;
        }
    }
    return answer;
}