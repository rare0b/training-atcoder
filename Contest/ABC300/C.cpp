#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    int H, W;
    cin >> H >> W;
    int min_val = min(H, W);
    // cout << min_val << endl;
    vector<string> C(H);
    vector<int> ans(min_val, 0);
    // for (auto x : ans) cout << x << endl;
    vector<vector<bool>> seen(H, vector<bool>(W, false));
    for (int i = 0; i < H; i++) cin >> C[i];

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (seen[i][j]) continue;
            if (C[i][j] == '#') {
                // cout << i << " " << j << ": # OK" << endl;

                int p = i, q = j;
                int cnt = 0;
                while (true) {
                    if (p >= H || p < 0 || q >= W || q < 0) break;

                    seen[p][q] = true;
                    if (C[p][q] != '#') {
                        break;
                    }

                    p++;
                    q++;
                    cnt++;
                }
                // cout << "cnt: " << cnt << endl;
                if (cnt == 1 || cnt % 2 == 0) continue;
                // cout << i << " " << j << ": 1 or %2 == 0 OK" << endl;

                p = i, q = j + cnt - 1;
                // cout << p << " " << q << endl;
                int cnt_rev = 0;
                while (true) {
                    if (p >= H || p < 0 || q >= W || q < 0) break;

                    seen[p][q] = true;
                    if (C[p][q] != '#') {
                        break;
                    }

                    p++;
                    q--;
                    cnt_rev++;
                }
                // cout << "cnt_rev: " << cnt_rev << endl;
                if (cnt != cnt_rev) break;
                // cout << i << " " << j << ": cnt == cnt_rev OK " << endl;

                // bool flag = false;
                // if (i > 0 && j > 0) {
                //     if (C[i - 1][j - 1] == '.') flag = true;
                // } else if (i > 0 && j + cnt < W) {
                //     if (C[i - 1][j + cnt] == '.') flag = true;
                // } else if (i + cnt < H && j > 0) {
                //     if (C[i + cnt][j - 1] == '.') flag = true;
                // } else if (i + cnt < H && j + cnt < W) {
                //     if (C[i + cnt][j + cnt] == '.') flag = true;
                // }
                // cout << cnt / 2 << endl;

                ans[cnt / 2 - 1]++;
            }
        }
    }

    for (int i = 0; i < min_val; i++) cout << ans[i] << " \n"[i == min_val - 1];
}