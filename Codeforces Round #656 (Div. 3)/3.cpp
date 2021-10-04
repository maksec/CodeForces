#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        int left_end = 0;
        bool h = true;
        while(h) {
            int max = left_end;
            for (int i = left_end; i < n; ++i) {
                if (a[i] > a[max]) {
                    max = i;
                }
            }
            bool p = false;
            for (int i = max; i < n - 1; ++i) {
                if (a[i + 1] > a[i]) {
                    left_end = max + 1;
                    p = true;
                    break;
                }
            }
            if (p) {
                continue;
            }
            for (int i = max; i > left_end; --i) {
                if (a[i] < a[i - 1]) {
                    left_end = i;
                    p = true;
                    break;
                }
            }
            if (!p) {
                break;
            }
        }
        cout << left_end << endl;
    }
    return 0;
}
