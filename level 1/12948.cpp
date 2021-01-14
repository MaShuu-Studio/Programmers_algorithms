#include <string>
#include <vector>

using namespace std;

string solution(string phone_number)
{
    int len = phone_number.length();
    
    for (int i = len-4-1; i >= 0; i--)
        phone_number[i] = '*';
    return phone_number;
}