#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    
    for (int i = 0; i < arr.size(); i++){
        int n = arr[i];
        if (n % divisor == 0) answer.push_back(n);
    }
    sort(answer.begin(), answer.end());
    if (answer.size() == 0) answer.push_back(-1);
    return answer;
}