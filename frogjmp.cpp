#include <iostream>

int solution(int X, int Y, int D)
{
    int distance = Y - X;
    int jumps = (distance) / D;
    if ((distance % D) != 0) {
        ++jumps;
    }

    return jumps;
}

int main()
{
    using namespace std;
    cout << solution(30, 70, 7) << endl;

    return 0;
}
