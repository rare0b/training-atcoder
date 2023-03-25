#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    int r, c;
    cin >> r >> c;
    vector<vector<char>> rc(r, vector<char>(c));
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> rc[i][j];
        }
    }

    auto bomb = rc;

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (!isdigit(bomb[i][j])) continue;
            int num = bomb[i][j] - '0';
            int cei = max(i - num, 0);
            int flo = min(i + num, r - 1);
            for (int y = cei; y <= flo; y++) {
                // 残された使える距離
                int dist_left = num - abs(i - y);
                int leftmost = max(j - dist_left, 0);
                int rightmost = min(j + dist_left, c - 1);
                for (int x = leftmost; x <= rightmost; x++) {
                    rc[y][x] = '.';
                }
            }
        }
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << rc[i][j];
        }
        cout << endl;
    }
}