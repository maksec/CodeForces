#include <bits/stdc++.h>
using namespace std;

int gcd (int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd (b, a % b);
}

int main() {
    int t; cin >> t;
    for (int u = 0; u < t; ++u) {
        int n; cin >> n;
        int min = 1000000000;
        vector <int> a(n), b(n);
        bool ubiv = true;
        int last = 0;
        bool bil = false;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if (min > a[i]) {
                min = a[i];
            }
            b[i] = a[i];
            if (a[i] == 1) {
                bil = true;
            }
            if (a[i] < last) {
                ubiv = false;
            }
            last = a[i];
        }
        if (bil) {
            cout << "YES" << endl;
            continue;
        }
        if (ubiv) {
            cout << "YES" << endl;
            continue;
        }
        sort(b.begin(), b.end());
        for (int i = 0; i < n; ++i) {
            if (a[i] != b[i]) {
                if (a[i] % min != 0 || b[i] % min != 0) {
                    cout << "NO" << endl;
                    bil = true;
                    break;
                }
            }
        }
        if (bil) {
            continue;
        }
        cout << "YES" << endl;
    }
    return 0;
}
