#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector <int> a(n), know(n);
    int first = 1, second = n;
    int sum = 0;
    for(int i = 0; i < n - 1; ++i) {
        cout << "? " << first << " " << second << endl;
        int r1; cin >> r1;
        cout << "? " << second << " " << first << endl;
        int r2; cin >> r2;
        if (r1 < r2) {
            a[second - 1] = r2;
            sum += r2;
            --second;
        } else {
            a[first - 1] = r1;
            sum += r1;
            ++first;
        }
    }
    int last = (n + 1) * n / 2 - sum;
    cout << "! ";
    for (int i = 0; i < n; ++i) {
        if (i + 1 == first) {
            cout << last << " ";
        } else {
            cout << a[i] << " ";
        }
    }
    cout << endl;
    return 0;
}
