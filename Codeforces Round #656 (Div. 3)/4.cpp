#include <bits/stdc++.h>
using namespace std;

int func(string s, char c) {
    if (s.size() == 1) {
        if (s[0] == c) {
            return 0;
        } else {
            return 1;
        }
    } else {
        string s1, s2;
        int skok_ne_c_s1 = 0, skok_ne_c_s2 = 0;
        for (int i = 0; i < s.size(); ++i) {
            if (i < s.size() / 2) {
                s1 += s[i];
                if (s[i] != c) {
                    ++skok_ne_c_s1;
                }
            } else {
                s2 += s[i];
                if (s[i] != c) {
                    ++skok_ne_c_s2;
                }
            }
        }
        return min
                (skok_ne_c_s1 + func(s2, (char)((int)c + 1)), skok_ne_c_s2 + func(s1, (char)((int)c + 1)));
    }
}

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        cout << func(s,'a') << endl;
    }
    return 0;
}
