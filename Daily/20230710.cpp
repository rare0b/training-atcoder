#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/abc118/tasks/abc118_b

int main() {
    int n, m;
    cin >> n >> m;
    vector<bool> ok(m, true);

    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        vector<bool> tmp_ok(m, false);
        for (int j = 0; j < k; j++) {
            int a;
            cin >> a;
            a--;
            tmp_ok[a] = true;
        }
        for (int j = 0; j < m; j++) {
            if (!tmp_ok[j]) ok[j] = false;
        }
    }

    int ans = 0;
    for (int i = 0; i < m; i++) {
        if (ok[i]) ans++;
    }

    cout << ans << endl;
}
