#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

struct Point
{
    int p;
    int power;
    int bonus;
};

int calPoint(Point p);
int solution(string dartResult) {
    int index = -1;
    Point point[3];
    
    for (int i = 0; i < dartResult.length(); i++)
    {
        char c = dartResult[i];
        if (isdigit(c))
        {
            int num = c - '0';
            if (num == 1 && dartResult[i+1] == '0')
            {
                num = 10;
                i++;
            }
            index++;
            point[index].p = num;
            point[index].power = 1;
            point[index].bonus = 1;
        }
        
        switch(c)
        {
            case 'D': 
                point[index].power = 2;
                break;
            case 'T': 
                point[index].power = 3;
                break;
            case '*':
                point[index].bonus *= 2;
                if (index != 0) point[index-1].bonus *= 2;
                break;
            case '#':
                point[index].bonus *= -1;
                break;
        }
    }
    
    return calPoint(point[0]) + calPoint(point[1]) + calPoint(point[2]);
}

int calPoint(Point p)
{
    return pow(p.p, p.power) * p.bonus;
}