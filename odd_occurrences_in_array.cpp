#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> &A)
{
    std::sort(begin(A), end(A));

    for (std::size_t i = 0; i < (A.size() - 1); i += 2) {
        if (A[i] != A[i+1]) {
            return A[i];
        }
    }

    return A[A.size() - 1];
}

int main()
{
    std::vector<std::vector<int>> test {
        {1, 2, 1, 2, 3},
        {9, 9, 5, 3, 5, 3, 18, 18, 2, 1, 2, 8, 7, 8, 7}
    };

    for (int i = 0; i < test.size(); i++) {
        cout << solution(test[i]) << endl;
    }

    return 0;
}
