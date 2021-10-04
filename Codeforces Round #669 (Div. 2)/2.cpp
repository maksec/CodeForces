#include <bits/stdc++.h>
using namespace std;

int gcd (int a, int b) {
    while (a!=0 && b!=0) {
        if (a>b) {
            a=a%b;
        }
        else b=b%a;
    }
    return a+b;
}

int main() {
    int t; cin >> t;
    for (int i = 0; i < t; ++i) {
        int n; cin >> n;
        vector <int> a(n), b(n), used(n);
        int index_max = 0;
        for (int j = 0; j < n; ++j) {
            cin >> a[j];
            if (a[j] > a[index_max]) {
                index_max = j;
            }
        }
        if (n == 1) {
            cout << a[0] << endl;
            continue;
        }
        used[index_max] = 1;
        b[0] = a[index_max];
        int current_gcd = b[0];
        int current_position = 1;
        while(true) {
            bool was = false;
            int index_now_max;
            for (int j = 0; j < n; ++j) {
                if(used[j] == 0 && !was) {
                    was = true;
                    index_now_max = j;
                } else if (used[j] == 0){
                    if (gcd(current_gcd, a[j]) > gcd(current_gcd, a[index_now_max])) {
                        index_now_max = j;
                    }
                }
            }
            if (!was) {
                break;
            } else {
                b[current_position] = a[index_now_max];
                used[index_now_max] = 1;
                current_gcd = gcd(current_gcd, a[index_now_max]);
                ++current_position;
            }
        }
        for (int j = 0; j < n; ++j) {
            cout << b[j] << " ";
        }
        cout << endl;
    }
    return 0;
}
