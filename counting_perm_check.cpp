#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solution(vector<int> &A)
{
    if (A.empty()) {
        return 0;
    }

    std::sort(begin(A), end(A));

    if (A[0] != 1 || A.back() != A.size()) {
        return 0;
    }

    for (std::size_t i = 0, limit = A.size() - 1; i < limit; ++i) {
        if ((A[i] + 1) != A[i + 1]) {
            return 0;
        }
    }

    return 1;
}

int main()
{
    std::vector<vector<int>> inputs = {
        {4, 1, 3, 2},
        {4, 1, 3},
        {2, 3, 4, 5},
        {1, 2, 3, 4, 5, 7}
    };

    for (std::size_t i = 0; i < inputs.size(); ++i) {
        cout << solution(inputs[i]) << endl;
    }

    return 0;
}
