#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(string skill, vector<string> skill_trees) {
    int answer = 0;
    
    
    for (int i = 0; i < skill_trees.size(); i++)
    {
        int j;
        int len = skill_trees[i].size();
        int step = 0;
        for (j = 0; j < len; j++)
        {
            if (skill_trees[i][j] == skill[step]) step++;
            else if(find(skill.begin(), skill.end(), skill_trees[i][j]) != skill.end())
                break;
        }
        if (j == len) answer++;
    }
    return answer;
}