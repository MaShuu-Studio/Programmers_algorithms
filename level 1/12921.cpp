#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    bool* sol = new bool[n+1];
    sol[0] = false;
    sol[1] = false;
    
    int answer = n - 1;
    
    for (int i = 2; i <= n; i++)
        sol[i] = true;
    
    for (int i = 2; i <= n; i++){
        if (sol[i])
            for(int j = i+i; j <= n; j+=i)
                if (sol[j] != false)
                {
                    sol[j] = false;
                    answer--;
                }
    }
    
    return answer;
}