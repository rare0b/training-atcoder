#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_v

int main() {
    int n;
    cin >> n;
    vector<int> a(n - 1), b(n - 1);
    for (int i = 0; i < n - 1; i++) {
        cin >> a[i];
        a[i]--;
    }
    for (int i = 0; i < n - 1; i++) {
        cin >> b[i];
        b[i]--;
    }

    vector<int> dp(n, -1000000000);
    dp[0] = 0;
    for (int i = 0; i < n - 1; i++) {
        dp[a[i]] = max(dp[a[i]], dp[i] + 100);
        dp[b[i]] = max(dp[b[i]], dp[i] + 150);
    }

    cout << dp[n - 1] << endl;
}
