#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <int> a(2*n);
        for (int i = 0; i < 2*n; ++i) {
            cin >> a[i];
        }
        for (int i = 0; i < 2*n; ++i) {
            for (int j = i + 1; j < 2*n; ++j) {
                if (a[i] == a[j] && a[i] != -1 && a[j] != -1) {
                    cout << a[i] << " ";
                    a[i] = -1;
                    a[j] = -1;
                }
            }
        }
        cout << endl;
    }
    return 0;
}
