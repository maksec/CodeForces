#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    for (int i = 0; i < t; ++i) {
        int n; cin >> n;
        vector <int> a(n);
        int skok_nuley = 0;
        for (int j = 0; j < n; ++j) {
            cin >> a[j];
            if (a[j] == 0) {
                ++skok_nuley;
            }
        }
        if (skok_nuley >= n - skok_nuley) {
            cout << skok_nuley << endl;
            for (int j = 0; j < skok_nuley; ++j) {
                cout << 0 << " ";
            }
            cout << endl;
        } else {
            if ((n - skok_nuley) % 2 == 0) {
                cout << n - skok_nuley << endl;
                for (int j = 0; j < n - skok_nuley; ++j) {
                    cout << 1 << " ";
                }
                cout << endl;
            } else {
                cout << n - skok_nuley - 1 << endl;
                for (int j = 0; j < n - skok_nuley - 1; ++j) {
                    cout << 1 << " ";
                }
                cout << endl;
            }
        }
    }
    return 0;
}
