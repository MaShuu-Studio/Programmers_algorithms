#include <string>
#include <vector>
#include <iostream>

using namespace std;

int fac(int n)
{
    if (n ==0) return 0;
    return n + fac(n-1);
}

vector<int> solution(int n) {
    vector<int> answer;
    
    int spin[n*n]; 
    int row = 0, column = 0;
    
    int dir = 0;
    
    fill_n(spin, n*n, 0);
    
    int max = fac(n);
    
    for (int i = 1; i <= max; i++)
    {
        spin[row*n + column] = i;
        
        if (dir == 0) row++;
        else if (dir == 1) column++;
        else
        {
            row--;
            column--;
        }
        
        if (row >= n || column >= n || spin[row*n + column] != 0)
        {
            if (dir == 0)
            {
                row--;
                column++;
            }
            else if (dir == 1)
            {
                column--;
                row--;
                column--;
            }
            else
            {
                row++;
                column++;
                row++;
            }
            dir = (dir + 1)%3;
        }
    }
    
    for (int i = 0; i < n*n; i++)
    {
        if(spin[i] != 0) answer.push_back(spin[i]);
    }
    
    return answer;
}