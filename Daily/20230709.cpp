#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> p(n);
    p[0] = 0;
    for (int i = 1; i < n; i++) {
        int np;
        cin >> np;
        np--;
        p[i] = np;
    }

    vector<int> dp(n, -1);
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        x--;

        dp[x] = max(dp[x], y);
    }

    for (int i = 1; i < n; i++) {
        dp[i] = max(dp[i], dp[p[i]] - 1);
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (dp[i] >= 0) ans++;
    }

    cout << ans << endl;
}
