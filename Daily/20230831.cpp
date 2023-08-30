#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/abc104/tasks/abc104_b

int main() {
    string s;
    cin >> s;
    bool ok = s[0] == 'A';

    int c_cnt = 0;
    for (int i = 2; i < s.size() - 1; i++) {
        if (s[i] == 'C') {
            c_cnt++;
        }
    }
    ok &= c_cnt == 1;

    for (int i = 1; i < s.size(); i++) {
        if (s[i] == 'C') {
            continue;
        }
        if (s[i] >= 'A' && s[i] <= 'Z') {
            ok = false;
            break;
        }
    }

    if (ok) {
        cout << "AC" << endl;
    } else {
        cout << "WA" << endl;
    }
}
