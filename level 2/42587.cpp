#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    int s_p = priorities[location];
    int max = *max_element(priorities.begin(), priorities.end());
    
    int index = 0;
    int curindex = -1;
        
    while(max >= s_p)
    {
        index = curindex;
        for (int i = 0; i < priorities.size(); i++)
        {
            index++;                
            if (index == priorities.size()) index = 0;
            if (priorities[index] == max)
            {
                answer++;
                curindex = index;        
                if (index == location) break;
            }
        }
        max--;
    }
    
    return answer;
}