#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

#define rep(i, m, n) for (int i = m; i < (int)(n); i++)

// https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_cp

int main() {
    int n;
    cin >> n;
    vector<int> h(n);
    rep(i, 0, n) cin >> h[i];

    vector<int> dp(n);
    dp[0] = 0, dp[1] = abs(h[0] - h[1]);
    rep(i, 2, n) {
        dp[i] = min(dp[i - 2] + abs(h[i - 2] - h[i]),
                    dp[i - 1] + abs(h[i - 1] - h[i]));
    }

    stack<int> st;
    int root = n - 1;
    while (true) {
        st.push(root + 1);
        if (root < 1) break;

        if (dp[root] == dp[root - 1] + abs(h[root - 1] - h[root]))
            root--;
        else
            root -= 2;
    }

    cout << st.size() << endl;
    while (true) {
        cout << st.top();
        st.pop();
        if (st.empty()) {
            cout << endl;
            break;
        } else {
            cout << " ";
        }
    }
}