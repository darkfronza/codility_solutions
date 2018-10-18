#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> &A)
{
    int n_zeroes = 0;
    int pairs = 0;
    const int LIMIT = 1000000000;

    for (const auto e: A) {
        if (e == 0) {
            ++n_zeroes;
        } else {
            pairs += n_zeroes;
            if (pairs > LIMIT) {
                return -1;
            }
        }
    }

    return pairs;
}

int main()
{
    std::vector<std::vector<int>> inputs = {
        {0, 1, 0, 1, 1},
        {1, 1},
        {1, 0},
        {1, 0, 1, 0, 1},
        {0, 0, 0, 1}
    };

    for (std::size_t i = 0; i < inputs.size(); ++i) {
        cout << solution(inputs[i]) << endl;
    }

    return 0;
}
