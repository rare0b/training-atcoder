#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/abc148/tasks/abc148_d

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int now = 1;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == now)
            now++;
        else
            ans++;
    }

    if (now != 1 && now == n - ans + 1)
        cout << ans << endl;
    else
        cout << -1 << endl;
}
