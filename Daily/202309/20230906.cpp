#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/abc049/tasks/abc049_b

int main() {
    int h, w;
    cin >> h >> w;
    vector<vector<char>> c(2 * h, vector<char>(w));
    for (int i = 0; i < 2 * h; i += 2) {
        for (int j = 0; j < w; j++) {
            cin >> c[i][j];
            c[i + 1][j] = c[i][j];
        }
    }

    for (int i = 0; i < 2 * h; i++) {
        for (int j = 0; j < w; j++) {
            cout << c[i][j];
        }
        cout << endl;
    }
}
