#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/abc278/tasks/abc278_e

int main() {
    int H, W, N, h, w;
    cin >> H >> W >> N >> h >> w;
    vector<vector<int>> A(H, vector<int>(W));
    vector<int> max_i(N, -1), min_i(N, 300), max_j(N, -1), min_j(N, 300);
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> A[i][j];
            int nx = A[i][j] - 1;
            // max/minのi,jは0以上H-1/W-1以下
            max_i[nx] = max(i, max_i[nx]);
            min_i[nx] = min(i, min_i[nx]);
            max_j[nx] = max(j, max_j[nx]);
            min_j[nx] = min(j, min_j[nx]);
        }
    }

    // i,jに合わせて下限0・上限H-h/W-wにする
    for (int k = 0; k <= H - h; k++) {
        for (int l = 0; l <= W - w; l++) {
            int cnt = 0;
            for (int m = 0; m < N; m++) {
                bool flag_i = (k <= min_i[m] && max_i[m] < k + h);
                bool flag_j = (l <= min_j[m] && max_j[m] < l + w);
                if (!(flag_i && flag_j)) cnt++;
            }
            cout << cnt << " \n"[l == W - w];
        }
    }
}
