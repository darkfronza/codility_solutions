#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int solution(int X, vector<int> &A)
{
    // If no leaves falling or less leaves then X, can't cross the river
    if (A.empty() || A.size() < X) {
        return -1;
    }

    std::set<int> jumps; // set with all required jumps, when we find X and this set is empty, frog can cross the river
    for (int i = 1; i <= X; ++i) {
        jumps.insert(i);
    }

    for (std::size_t i = 0; i < A.size(); ++i) {
        auto element = jumps.find(A[i]);
        if (element != jumps.end()) {
            jumps.erase(element);
            if (jumps.empty()) {
                return i;
            }
        }
    }

    return -1;
}

int main()
{
    std::vector<int> jumps = {1, 3, 1, 4, 2, 3, 5, 4};

    std::cout << solution(5, jumps);

    cout << endl;

    return 0;
}
