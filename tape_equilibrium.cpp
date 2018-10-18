#include <vector>
#include <iostream>
#include <limits>
#include <cmath>
#include <algorithm>
#include <numeric>
using namespace std;

int solution(vector<int> &A)
{
    auto limit = A.size() - 1;
    auto left_sum = A[0];
    auto right_sum = std::accumulate(next(begin(A)), end(A), 0);

    int min_diff = std::abs(left_sum - right_sum);

    for(std::size_t i = 1; i < limit; ++i){
        left_sum += A[i];
        right_sum -= A[i];

        if (std::abs(left_sum - right_sum) < min_diff) {
            min_diff = std::abs(left_sum - right_sum);
        }
    }

    return min_diff;
}


int main()
{
    std::vector<std::vector<int>> inputs {
        {3, 1, 2, 4, 3},
        {1, 9, 30, 1, 100},
        {1, 2, 3, 4, 5},
        {-1, -2, -3}
    };

    for (std::size_t i = 0; i < inputs.size(); ++i) {
        cout << solution(inputs[i]) << endl;
    }

    return 0;
}

