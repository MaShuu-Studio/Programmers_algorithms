#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    
    vector<int> p1{1,2,3,4,5};
    vector<int> p2{2,1,2,3,2,4,2,5};
    vector<int> p3{3,3,1,1,2,2,4,4,5,5};
    
    vector<int>::iterator iter1, iter2, iter3;
    
    iter1 = p1.begin();
    iter2 = p2.begin();
    iter3 = p3.begin();
    
    vector<int> sol{0,0,0};
    
    for (int i = 0; i < answers.size(); i++)
    {
        if (answers[i] == *iter1) sol[0]++;
        if (answers[i] == *iter2) sol[1]++;
        if (answers[i] == *iter3) sol[2]++;
        
        iter1++;
        iter2++;
        iter3++;
        
        if (iter1 == p1.end()) iter1 = p1.begin();
        if (iter2 == p2.end()) iter2 = p2.begin();
        if (iter3 == p3.end()) iter3 = p3.begin();
    }
    int max = sol[0];
    for (int i = 1 ; i < 3; i++)
         if (max < sol[i]) max = sol[i];
    
    
    for (int i = 0; i < 3; i++)
        if (sol[i] == max) answer.push_back(i+1);
    
    sort(answer.begin(), answer.end());
    
    return answer;
}