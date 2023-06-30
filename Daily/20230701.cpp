#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// https://algo-method.com/tasks/1114

int main() {
    int n, a;
    cin >> n >> a;
    vector<int> p(n), q(n), r(n);

    for (int i = 0; i < n; i++) cin >> p[i];
    for (int i = 0; i < n; i++) cin >> q[i];
    for (int i = 0; i < n; i++) cin >> r[i];

    vector<vector<int>> dp(3, vector<int>(n + 1, 0));
    dp[0][1] = p[0], dp[1][1] = q[0], dp[2][1] = r[0];
    for (int i = 1; i < n; i++) {
        dp[0][i + 1] =
            min({dp[0][i] + p[i] - a, dp[1][i] + p[i], dp[2][i] + p[i]});
        dp[1][i + 1] =
            min({dp[0][i] + q[i], dp[1][i] + q[i] - a, dp[2][i] + q[i]});
        dp[2][i + 1] =
            min({dp[0][i] + r[i], dp[1][i] + r[i], dp[2][i] + r[i] - a});
    }

    cout << min({dp[0][n], dp[1][n], dp[2][n]}) << endl;
}
