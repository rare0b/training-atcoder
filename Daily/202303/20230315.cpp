#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

#define rep(i, m, n) for (int i = m; i < (int)(n); i++)

// https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_q

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    rep(i, 1, n) cin >> a[i];
    rep(i, 2, n) cin >> b[i];

    vector<int> dp(n, 0);
    vector<pair<bool, bool>> from_a_or_b(n, pair(false, false));
    dp[0] = 0, dp[1] = a[1], from_a_or_b[1].first = true;
    for (int i = 2; i < n; i++) {
        int a_root = dp[i - 1] + a[i];
        int b_root = dp[i - 2] + b[i];
        if (a_root < b_root) {
            dp[i] = a_root;
            from_a_or_b[i].first = true;
        } else {
            dp[i] = b_root;
            from_a_or_b[i].second = true;
        }
    }

    stack<int> ans_stack;
    ans_stack.push(n);
    int p = n - 1;
    while (p > 0) {
        if (from_a_or_b[p].first)
            p -= 1;
        else
            p -= 2;
        ans_stack.push(p + 1);
    }
    int sz = ans_stack.size();
    cout << sz << endl;
    for (int i = 0; i < sz; i++) {
        cout << ans_stack.top() << " \n"[i == sz - 1];
        ans_stack.pop();
    }
}
