#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://algo-method.com/tasks/984

int main() {
    int n;
    cin >> n;
    vector<int> a(n, 0), b(n, 0);
    for (int i = 1; i < n; i++) cin >> a[i];
    for (int i = 2; i < n; i++) cin >> b[i];
    vector<int> dp(n, 0);
    dp[1] = a[1];
    for (int i = 2; i < n; i++) {
        dp[i] = min(dp[i - 1] + a[i], dp[i - 2] + b[i]);
    }
    cout << dp[n - 1] << endl;
}
