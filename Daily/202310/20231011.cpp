#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_h

int main() {
    int h, w;
    cin >> h >> w;
    vector<vector<int>> x(h, vector<int>(w));
    for (int i = 0; i < h; ++i) {
        for (int j = 0; j < w; ++j) {
            cin >> x[i][j];
        }
    }

    vector<vector<int>> cs(h + 1, vector<int>(w + 1));
    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= w; j++) {
            cs[i][j] = cs[i][j - 1] + x[i - 1][j - 1];
        }
    }
    for (int j = 1; j <= w; j++) {
        for (int i = 1; i <= h; i++) {
            cs[i][j] += cs[i - 1][j];
        }
    }

    int q;
    cin >> q;
    for (int i = 0; i < q; ++i) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        cout << cs[c][d] - cs[a - 1][d] - cs[c][b - 1] + cs[a - 1][b - 1]
             << endl;
    }
}
