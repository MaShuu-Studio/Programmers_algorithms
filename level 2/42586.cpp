#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    int index = 0;
    
    reverse(progresses.begin(), progresses.end());
    reverse(speeds.begin(), speeds.end());
    
    while (progresses.size())
    {
        for (int i = 0; i < progresses.size(); i++)
        {
            if(progresses[i] < 100) progresses[i] += speeds[i];
        }
        
        while (progresses.back() >= 100)
        {
            progresses.pop_back();
            index++;
        }
        if(index != 0)
        {        
            answer.push_back(index);
            index = 0;            
        }
    }
    
    return answer;
}