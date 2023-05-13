#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/agc043/tasks/agc043_a

int main() {
    int H, W;
    cin >> H >> W;
    vector<string> s(H);
    for (int i = 0; i < H; i++) cin >> s[i];

    vector<vector<int>> dp(H, vector<int>(W, 0));
    if (s[0][0] == '#') dp[0][0] = 1;
    for (int i = 1; i < W; i++) {
        if (s[0][i - 1] == '.' && s[0][i] == '#') {
            dp[0][i] = dp[0][i - 1] + 1;
        } else {
            dp[0][i] = dp[0][i - 1];
        }
    }
    for (int i = 1; i < H; i++) {
        if (s[i - 1][0] == '.' && s[i][0] == '#') {
            dp[i][0] = dp[i - 1][0] + 1;
        } else {
            dp[i][0] = dp[i - 1][0];
        }
    }
    for (int i = 1; i < H; i++) {
        for (int j = 1; j < W; j++) {
            int h = 0, w = 0;
            if (s[i][j] == '#') {
                if (s[i - 1][j] == '.') h = 1;
                if (s[i][j - 1] == '.') w = 1;
            }
            dp[i][j] = min(dp[i - 1][j] + h, dp[i][j - 1] + w);
        }
    }

    // for (auto x : dp) {
    //     for (auto y : x) {
    //         cout << y << ' ';
    //     }
    //     cout << '\n';
    // }

    cout << dp[H - 1][W - 1] << '\n';
    return 0;
}
