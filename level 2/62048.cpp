using namespace std;

long long solution(int w, int h) {
    long long large = (w > h) ? w : h;
    long long small = (w > h) ? h : w;

    long long slope = large / small;
    if (large % small != 0) slope += 1;

    return (large - slope) * small;
}