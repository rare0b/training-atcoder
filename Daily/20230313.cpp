#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_p

int main() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    // 添字は aが1~ bが2~
    for (int i = 1; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 2; i < n; i++) {
        cin >> b[i];
    }

    vector<int> dp(n);
    dp[0] = 0;
    dp[1] = a[1];
    for (int i = 2; i < n; i++) {
        int a_sum = dp[i - 1] + a[i];
        int b_sum = dp[i - 2] + b[i];
        dp[i] = min(a_sum, b_sum);
    }

    cout << dp[n - 1] << endl;
}