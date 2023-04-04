#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_u

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> pa(n + 1, pair(0, 0));
    for (int i = 1; i <= n; i++) {
        int a, b;
        cin >> a >> b;
        pa[i].first = a, pa[i].second = b;
    }

    vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));
    for (int i = 1; i <= n; i++) {
        for (int j = n; j > 0; j--) {
            if (j == n) {
                dp[i][j] = (i <= pa[i - 1].first && j >= pa[i - 1].first
                                ? dp[i - 1][j] + pa[i - 1].second
                                : dp[i - 1][j]);
                continue;
            }
            dp[i][j] = max((i <= pa[j + 1].first && j >= pa[j + 1].first
                                ? dp[i][j + 1] + pa[j + 1].second
                                : dp[i][j + 1]),
                           (i <= pa[i - 1].first && j >= pa[i - 1].first
                                ? dp[i - 1][j] + pa[i - 1].second
                                : dp[i - 1][j]));
        }
    }

    // for (auto x : dp) {
    //     for (auto y : x) {
    //         cout << y << " ";
    //     }
    //     cout << endl;
    // }
    int ans = 0;
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n; j++) {
            ans = max(ans, dp[i][j]);
        }
    }
    cout << ans << endl;
}
