#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    string s;
    cin >> s;
    bool ok = true;
    bool k_flag = false;
    int b_x = -1;
    for (int i = 0; i < 8; i++) {
        if (s[i] == 'B') {
            if (b_x == -1) {
                b_x = i;
                continue;
            }
            if (b_x % 2 == i % 2) {
                ok = false;
            }
        }

        if (s[i] == 'R') {
            if (k_flag) {
                ok = false;
            }
            k_flag = true;
        }

        if (s[i] == 'K') {
            if (!k_flag) {
                ok = false;
            }
            k_flag = false;
        }
    }

    if (ok)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}