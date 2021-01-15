#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0;
    int goal_truck = 0;
    int remain_weight = weight;
    int index = 0;
    int size = truck_weights.size();
    
    pair<int, int> trucks[size];
    
    for (int i = 0; i < size; i++)
        trucks[i] = {truck_weights[i], bridge_length};
    
    while(goal_truck < size)
    {
        for (int i = goal_truck; i < index; i++)
        {
            trucks[i].second--;
            if(trucks[i].second <= 0)
            {
                goal_truck++;
                remain_weight += trucks[i].first;
            }
        }
        
        if (index < size && remain_weight >= trucks[index].first)
            remain_weight -= trucks[index++].first;
        
        answer++;
    }
    
    return answer;
}