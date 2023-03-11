#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    int h, w;
    cin >> h >> w;
    vector<vector<int>> a(h, vector<int>(w));
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> a[i][j];
        }
    }
    // for (auto x : a) {
    //     for (auto y : x) {
    //         cout << y << " ";
    //     }
    //     cout << endl;
    // }

    // set使って、↓*(h-1)、→*(w-1)を全探索したら間に合いそう…
    vector<int> is_w(h - 1 + w - 1);
    for (int i = 0; i < h - 1; i++) {
        is_w[i] = 0;
    }
    for (int i = h - 1; i < h - 1 + w - 1; i++) {
        is_w[i] = 1;
    }
    // for (auto x : is_w) {
    //     cout << x << " ";
    // }
    // cout << endl;
    int ans = 0;
    do {
        set<int> s;
        int x = 0, y = 0;
        s.insert(a[y][x]);
        for (int i = 0; i < h - 1 + w - 1; i++) {
            if (is_w[i])
                x++;
            else
                y++;
            s.insert(a[y][x]);
            // for (auto x : s) {
            //     cout << x << " ";
            // }
            // cout << endl;
        }

        if (s.size() == h + w - 1) ans++;
    } while (std::next_permutation(is_w.begin(), is_w.end()));

    cout << ans << endl;
}