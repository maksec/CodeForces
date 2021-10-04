#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        int x, y, z; cin >> x >> y >> z;
        bool h = false;
        if (x == y) {
            if (x >= z) {
                cout << "YES" << endl << x << " " << 1 << " " << z;
                h = true;
            }
        } else if (x == z) {
            if (x >= y) {
                cout << "YES" << endl << x << " " << 1 << " " << y;
                h = true;
            }
        } else if (z == y) {
            if (z >= x) {
                cout << "YES" << endl << z << " " << 1 << " " << x;
                h = true;
            }
        }
        if (!h){
            cout << "NO";
        }
        cout << endl;
    }
    return 0;
}
