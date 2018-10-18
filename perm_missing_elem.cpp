#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> &A)
{
    if (A.empty()) {
        return 1;
    }

    std::sort(begin(A), end(A));

    if (A[0] > 1) {
        return A[0]-1;
    }

    for (std::size_t i = 0, limit = (A.size() - 1); i < limit; ++i) {
        if ((A[i] + 1) < (A[i+1])) {
            return (A[i] + 1);
        }
    }

    return A.back()+1;
}

int main()
{
    std::vector<vector<int>> inputs = {
        {2, 3, 1, 5},
        {7, 6, 5, 8, 3, 2, 1, 4, 9}
    };

    for (std::size_t i = 0; i < inputs.size(); ++i) {
        cout << solution(inputs[i]) << endl;
    }

    return 0;
}


