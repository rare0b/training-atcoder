#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_u

int main() {
    int n;
    cin >> n;
    vector<int> p(n + 1, 0), a(n + 1, 0);
    for (int i = 1; i <= n; i++) cin >> p[i] >> a[i];

    vector<vector<int>> dp(n + 1, vector<int>(n + 2, 0));
    for (int i = 1; i <= n; i++) {
        for (int j = n; j > 0; j--) {
            int scoi = 0;
            // 1つ上のマスから遷移できるかどうか
            // p[i - 1]が今のi以上なら、i - 1 → iに遷移してもマスは残る
            // 1つ上のマスから遷移するのでjは変化しないが、
            // もともとjより小さくないとマスが残っていない
            if (i <= p[i - 1] && j >= p[i - 1]) scoi = a[i - 1];

            int scoj = 0;
            if (i <= p[j + 1] && j >= p[j + 1]) scoj = a[j + 1];

            dp[i][j] = max(dp[i - 1][j] + scoi, dp[i][j + 1] + scoj);
        }
    }

    cout << dp[n][1] << endl;
}
