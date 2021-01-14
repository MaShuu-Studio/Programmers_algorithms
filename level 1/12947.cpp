#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

bool solution(int x) {
    bool answer = true;
    int origin = x;
    int num = 0;
    
    for (int i = 0; x != 0; i++)
    {
        num += x % 10;
        x /= 10;
    }
    answer = origin % num == 0 ? true : false;
    return answer;
}