#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/abc124/tasks/abc124_c

int main() {
    string s;
    cin >> s;
    // aは0101など、bは1010など
    string a = s, b = s;
    for (int i = 0; i < s.size(); i++) {
        if (i % 2 == 0) {
            a[i] = '0';
            b[i] = '1';
        } else {
            a[i] = '1';
            b[i] = '0';
        }
    }
    int a_cnt = 0, b_cnt = 0;
    for (int i = 0; i < s.size(); i++) {
        if (a[i] != s[i]) a_cnt++;
        if (b[i] != s[i]) b_cnt++;
    }

    cout << min(a_cnt, b_cnt) << endl;
}
