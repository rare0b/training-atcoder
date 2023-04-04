#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

#define rep(i, m, n) for (int i = m; i < (int)(n); i++)

// https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_r

int main() {
    int n;
    int s;
    cin >> n >> s;
    vector<int> a(n);
    rep(i, 0, n) cin >> a[i];

    vector<vector<bool>> dp(n + 1, vector<bool>(s + 1, false));
    dp[0][0] = true;

    rep(i, 0, n) {
        rep(j, 0, s + 1) {
            if (dp[i][j]) {
                dp[i + 1][j] = true;
                if (j + a[i] <= s) {
                    dp[i + 1][j + a[i]] = true;
                }
            }
        }
    }

    if (dp[n][s])
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}