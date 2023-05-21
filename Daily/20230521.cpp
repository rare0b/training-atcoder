#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/abc122/tasks/abc122_b

int main() {
    string s;
    cin >> s;
    int ans = 0;
    int cnt = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'A' or s[i] == 'C' or s[i] == 'G' or s[i] == 'T') {
            cnt++;
        } else {
            ans = max(ans, cnt);
            cnt = 0;
        }
    }
    ans = max(ans, cnt);
    cout << ans << endl;
}
