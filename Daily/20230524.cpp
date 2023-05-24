#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_w

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(m, vector<int>(n));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    // クーポン0枚～m枚のm+1
    // 品物0種類～n種類の組み合わせの2^n
    vector<vector<int>> dp(m + 1, vector<int>((1 << n), 1000000000));
    dp[0][0] = 0;
    for (int i = 1; i < m + 1; i++) {
        int v = 0;
        for (int k = 0; k < n; k++) {
            if (a[i - 1][k]) v += (1 << k);
        }
        for (int j = 0; j < (1 << n); j++) {
            dp[i][j] = min(dp[i][j], dp[i - 1][j]);
            dp[i][(j | v)] = min(dp[i][(j | v)], dp[i][j] + 1);
        }
    }

    if (dp[m][(1 << n) - 1] == 1000000000)
        cout << -1 << endl;
    else
        cout << dp[m][(1 << n) - 1] << endl;
}
