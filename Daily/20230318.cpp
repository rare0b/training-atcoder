#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

#define rep(i, m, n) for (int i = m; i < (int)(n); i++)

// https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_cq

int main() {
    int n, s;
    cin >> n >> s;
    vector<int> a(n);
    rep(i, 0, n) cin >> a[i];

    vector<vector<bool>> dp(n + 1, vector<bool>(s + 1, false));
    dp[0][0] = true;
    rep(i, 0, n) {
        rep(j, 0, s + 1) {
            if (!dp[i][j]) continue;

            dp[i + 1][j] = true;
            if (j + a[i] <= s) dp[i + 1][j + a[i]] = true;
        }
    }

    if (!dp[n][s]) {
        cout << -1 << endl;
        return 0;
    }

    int j = s;
    stack<int> st;
    for (int i = n; i > 0; i--) {
        if (dp[i - 1][j]) {
            continue;
        } else {
            st.push(i);
            j -= a[i - 1];
        }
    }

    int sz = st.size();
    cout << sz << endl;
    rep(i, 0, sz) {
        cout << st.top() << " \n"[i == sz - 1];
        st.pop();
    }
}