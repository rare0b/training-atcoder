#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/abc139/tasks/abc139_c

int main() {
    int n;
    cin >> n;
    int ans = 0, cnt = 0;
    int pre_h;
    cin >> pre_h;
    for (int i = 1; i < n; i++) {
        int h;
        cin >> h;
        if (h <= pre_h) {
            cnt++;
            ans = max(ans, cnt);
        } else {
            ans = max(ans, cnt);
            cnt = 0;
        }
        pre_h = h;
    }
    cout << ans << endl;
}
