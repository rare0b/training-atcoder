#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/abc079/tasks/abc079_d

int main() {
    int h, w;
    cin >> h >> w;
    vector<vector<int>> c(10, vector<int>(10));
    vector<vector<int>> a(h, vector<int>(w));
    for (int i = 0; i <= 9; i++) {
        for (int j = 0; j <= 9; j++) {
            cin >> c[i][j];
        }
    }
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> a[i][j];
        }
    }

    // ワーシャルフロイド法 10^3
    // https://dai1741.github.io/maximum-algo-2012/docs/shortest-path/
    for (int i = 0; i <= 9; i++) {          // 経由する頂点
        for (int j = 0; j <= 9; j++) {      // 開始頂点
            for (int k = 0; k <= 9; k++) {  // 終端
                c[j][k] = min(c[j][k], c[j][i] + c[i][k]);
            }
        }
    }

    int ans = 0;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (a[i][j] == -1) continue;
            ans += c[a[i][j]][1];
        }
    }

    cout << ans << endl;
}
