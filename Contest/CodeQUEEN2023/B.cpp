#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    int n;
    cin >> n;
    vector<int> r(n - 1), c(n - 1);

    vector<bool> yoko(n, false);
    vector<bool> tate(n, false);
    vector<vector<bool>> naname(n, vector<bool>(n, false));
    vector<pair<int, int>> nnm = {{1, 1}, {1, -1}, {-1, -1}, {-1, 1}};

    for (int i = 0; i < n - 1; i++) {
        cin >> r[i] >> c[i];
        r[i]--, c[i]--;
        yoko[r[i]] = true;
        tate[c[i]] = true;

        for (int j = 0; j < 4; j++) {
            int y = r[i], x = c[i];
            while (y >= 0 && y < n && x >= 0 && x < n) {
                naname[y][x] = true;
                y += nnm[j].first, x += nnm[j].second;
            }
        }
    }
    // for (auto nx : naname) {
    //     for (auto x : nx) {
    //         cout << x << " ";
    //     }
    //     cout << endl;
    // }

    // 座標の取り方は(yoko, tate)

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (!yoko[i] && !tate[j] && !naname[i][j]) {
                cout << i + 1 << " " << j + 1 << endl;
                return 0;
            }
        }
    }
    cout << -1 << endl;
}
