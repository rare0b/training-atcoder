#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    int h, w, n;
    cin >> h >> w >> n;
    vector<vector<bool>> hole(h, vector<bool>(w, false));
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        hole[a][b] = true;
    }

    vector<vector<int>> dp(h, vector<int>(w, 0));

    for (int i = 0; i < h; i++) {
        if (!hole[i][0]) dp[i][0] = 1;
    }
    for (int j = 1; j < w; j++) {
        if (!hole[0][j]) dp[0][j] = 1;
    }

    for (int i = 1; i < h; i++) {
        for (int j = 1; j < w; j++) {
            if (hole[i][j])
                dp[i][j] = 0;
            else
                dp[i][j] =
                    min({dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]}) + 1;
        }
    }

    ll ans = 0;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            ans += ll(dp[i][j]);
        }
    }

    cout << ans << endl;
}
