#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/abc114/tasks/abc114_b

int main() {
    string s;
    cin >> s;
    int ans = 1e9;
    for (int i = 0; i < s.length() - 2; i++) {
        int x = abs(753 - stoi(s.substr(i, 3)));
        ans = min(ans, x);
    }
    cout << ans << endl;
}
