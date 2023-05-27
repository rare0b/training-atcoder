#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    int n;
    string s, t;
    cin >> n >> s >> t;
    bool flag = true;

    for (int i = 0; i < n; i++) {
        if (s[i] == t[i]) {
            continue;
        } else if (s[i] == '1' && t[i] == 'l') {
            continue;
        } else if (s[i] == 'l' && t[i] == '1') {
            continue;
        } else if (s[i] == '0' && t[i] == 'o') {
            continue;
        } else if (s[i] == 'o' && t[i] == '0') {
            continue;
        }

        flag = false;
    }

    if (flag) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
