#include <string>
#include <vector>

using namespace std;

int solution(vector<int> a, vector<int> b) {
    int answer = 0;
    while(a.size() > 0)
    {
        answer += a.back() * b.back();
        a.pop_back();
        b.pop_back();
    }
    return answer;
}