#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    for (int u = 0; u < t; ++u) {
        int x1,y1,z1,x2,y2,z2; cin >> x1 >> y1>>z1>>x2>>y2>>z2;
        int h = 0;
        if (z1 > y2) {
            h = z1 - y2;
        }
        if (z2 <= x1 + h) {
            cout << min(z1,y2) * 2 << endl;
        } else {
            cout << min(z1,y2) * 2 - (z2 - x1 - h) * 2 << endl;
        }
    }
    return 0;
}
