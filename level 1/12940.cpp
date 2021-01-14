#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    int s = n < m ? n : m;
    int l = n < m ? m : n;
    
    int sol = 1;
    
    if (l % s == 0) sol = s;
    else
        for (int i = 1; i <= s/2; i++)
            if (l % i == 0 && s % i == 0) sol = i;
    
    answer.push_back(sol);
    answer.push_back(s * l / sol);    
    
    return answer;
}