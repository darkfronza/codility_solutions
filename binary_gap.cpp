#include <iostream>

using namespace std;

int binary_gap(int n)
{
    unsigned mask = (1u << 30);
    bool one = false;
    int bin_gap = 0;
    int max_gap = 0;

    while (mask) {
        if (one) {
            if ((n & mask) == 0) {
                ++bin_gap;
            } else {
                if (max_gap < bin_gap) {
                    max_gap = bin_gap;
                }
                bin_gap = 0;
            }
        } else {
           one = (n & mask) != 0 ;
        }
        mask >>= 1;
    }

    return max_gap;
}

int main()
{
    cout << binary_gap(9) << endl;
    cout << binary_gap(529) << endl;
    cout << binary_gap(20) << endl;
    cout << binary_gap(15) << endl;
    cout << binary_gap(32) << endl;
    return 0;
}
