#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    vector<int> arr;
    string str = "";
    
    for (int i = 0; i < n; i++)
        arr.push_back(arr1[i] | arr2[i]);
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            str += arr[i]%2 == 0 ? " " : "#";
            arr[i] /= 2;
        }
        reverse(str.begin(), str.end());
        answer.push_back(str);
        str = "";
    }
    return answer;
}