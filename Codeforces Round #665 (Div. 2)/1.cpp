#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    for (int u = 0; u < t; ++u) {
        double n, k; cin >> n >> k;
        cout << fixed;
        if (k > n) {
            cout << (int)(k - n) << endl;
        } else if (k == n) {
            cout << "0" << endl;
        } else {
            double j = (n - k) / 2;
            if (j == (int)j) {
                cout << 0 << endl;
            } else {
                cout << 1 << endl;
            }
        }
    }
    return 0;
}
