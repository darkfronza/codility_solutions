#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(int N, vector<int> &A)
{
    vector<int> counters(N, 0);
    int upgrade_all = N + 1;
    int max_counter = 0;
    int max_tmp = -1;

    for (std::size_t i = 0; i < A.size(); ++i) {
        const auto k = A[i];

        if (k >= 1 && k <= N) {
            int &target_counter = counters[k - 1];

            if (target_counter < max_tmp) {
                target_counter = max_tmp;
            }
            ++target_counter;
            if (target_counter > max_counter) {
                max_counter = target_counter;
            }
        } else if (A[i] == upgrade_all) {
            max_tmp = max_counter;
        }
    }

    for (auto &e: counters) {
        if (e < max_tmp) {
            e = max_tmp;
        }
    }

    return counters;
}

int main()
{
    std::vector<int> input = {3, 4, 4, 6, 1, 4, 4};

    cout << "(";
    for (auto e: solution(5, input)) {
        cout << e << ", ";
    }
    cout << ")" << endl;
    return 0;
}
