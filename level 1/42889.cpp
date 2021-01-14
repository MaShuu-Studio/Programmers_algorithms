#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

struct Fail_rate
{
    double rate;
    int stage;
};

bool cmp(Fail_rate &f1, Fail_rate &f2);
vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    vector<Fail_rate> fail_rates; 
    
    int stage = 1;
    int index = 0;
    
    sort (stages.begin(), stages.end());
    
    int i = 0;
    Fail_rate f;
    for (; i < stages.size(); i++)
    {
        while (stages[i] != stage && stage <= N)
        {
            f.rate = (double)(i-index) / (stages.size() - index);
            f.stage = stage;
            fail_rates.push_back(f);
            index = i;
            stage++;
        }
    }
    
    while (i == stages.size() && stage <= N)
    {
        if (index != stages.size())
            f.rate = (double)(i-index) / (stages.size() - index);
        else f.rate = 0;
        f.stage = stage;
        fail_rates.push_back(f);
        index = i;
        stage++;
    }
    
    sort(fail_rates.rbegin(), fail_rates.rend(), cmp);
    
    for (int i = 0; i < fail_rates.size(); i++)
        answer.push_back(fail_rates[i].stage);    
    
    return answer;
}

bool cmp(Fail_rate &f1, Fail_rate &f2)
{
    if (f1.rate < f2.rate) return true;
    else if (f1.rate == f2.rate && f1.stage > f2.stage) return true;
    return false;
}