using namespace std;

int gcd(int n, int m)
{
    while (m != 0)
    {
        int tmp = m;
        m = n % m;
        n = tmp;
    }
    return n;
}
long long solution(int w, int h) {
    long long answer = (long long) w * h;
    long long g = gcd(w, h);
    long long l = w/g + h/g - 2 + 1;
    answer -= l * g;
    
    return answer;
}