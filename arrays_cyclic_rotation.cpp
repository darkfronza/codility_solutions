#include <iterator>
#include <iostream>
#include <vector>
#include <cstddef>
using namespace std;

vector<int> solution(vector<int> &A, int K)
{
    if (K == 0 || K == A.size()) {
        return A;
    }

    vector<int> rotated(A.size());

    for (std::size_t i = 0; i < A.size(); ++i) {
        rotated[(i + K) % A.size()] = A[i];
    }

    return rotated;
}

int main()
{
    std::vector<int> vec = {1, 2, 3, 4, 5};

    for (int i = 0; i <= (vec.size() + 2); i++) {
        vector<int> test(vec);
        cout << "Rotating vector by " << i << endl;
        std::copy(begin(test), end(test), ostream_iterator<int>(cout, " "));
        cout << endl;

        test = solution(test, i);
        std::copy(begin(test), end(test), ostream_iterator<int>(cout, " "));
        cout << endl << endl;
    }

    return 0;
}
