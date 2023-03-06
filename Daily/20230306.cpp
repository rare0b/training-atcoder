#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/abc043/tasks/abc043_b

int main() {
    string s;
    cin >> s;
    string ans = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '0') {
            ans += '0';
        } else if (s[i] == '1') {
            ans += '1';
        } else {
            if (ans.size() > 0) {
                ans.pop_back();
            }
        }
    }

    cout << ans << endl;
}