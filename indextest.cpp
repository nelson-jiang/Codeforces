#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;                //  2  Avoid writing std:: everywhere
using int64 = long long;            //  3  64-bit integer alias (values can exceed 1e9)

/* ─────────────────────── driver ─────────────────────── */
int main() {
    ios::sync_with_stdio(false);    //  4  Fast I/O
    cin.tie(nullptr);               //  5  Disable the tie between cin and cout

    int t;                          //  6  Number of test cases
    cin >> t;                       //  7  Read it
    while (t--) {                   //  8  Handle each test case
        int n, m;                   //  9  n = array length, m = number of operations
        cin >> n >> m;              // 10  Read them

        int64 maxVal = LLONG_MIN;   // 11  Will hold the current maximum of the array

        /* ---- read the initial array and find its maximum ---- */
        for (int i = 0; i < n; ++i) {   // 12  Loop over n numbers
            int64 x;                    // 13  Current element
            cin >> x;                   // 14  Read it
            maxVal = max(maxVal, x);    // 15  Keep the larger of (old max, x)
        }

        /* ---- process each operation and output the new maximum ---- */
        for (int i = 0; i < m; ++i) {   // 16  m operations to process
            char op;                    // 17  '+' or '-'
            int64 l, r;                 // 18  Value interval [l, r]
            cin >> op >> l >> r;        // 19  Read the operation

            if (l <= maxVal && maxVal <= r) { // 20  Does the interval hit the maximum?
                if (op == '+') {              // 21  Add-one operation
                    ++maxVal;                 // 22  Entire block of maxima moves to max+1
                } else {                      // 23  Otherwise op == '-'
                    --maxVal;                 // 24  Entire block moves to max-1
                }
            }
            cout << maxVal << '\n';           // 25  Output after this operation
        }
    }
    return 0;                                 // 26  Normal program termination
}

