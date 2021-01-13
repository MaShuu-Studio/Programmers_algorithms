#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    
    answer.push_back(arr.back());
    arr.pop_back();
    while(arr.size() > 0)
    {
        int i = arr.back();
        if (answer.back() != i){
            answer.push_back(i);
        } 
        arr.pop_back();
    }
    
    reverse(answer.begin(), answer.end());
    return answer;
}