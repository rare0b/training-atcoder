#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    string S;
    cin >> S;
    int N = S.length();
    vector<vector<int>> dp(33, vector<int>(N));

    // 2^0 = 1回移動した先のマス
    for (int i = 0; i < N; i++) {
        if (S[i] == 'R')
            dp[0][i] = i + 1;
        else
            dp[0][i] = i - 1;
    }

    for (int p = 0; p < 32; p++) {
        for (int i = 0; i < N; i++) {
            dp[p + 1][i] = dp[p][dp[p][i]];
        }
    }

    vector<int> ans(N, 0);
    for (int i = 0; i < N; i++) {
        ans[dp[32][i]]++;
    }

    for (int i = 0; i < N; i++) {
        cout << ans[i] << " \n"[i == N - 1];
    }
}
