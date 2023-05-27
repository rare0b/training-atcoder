#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    // n回移動 m個のアイテム 開始、hの体力 アイテム消費でkまで回復
    int n, m, h, k;
    cin >> n >> m >> h >> k;
    // 長さnの文字列s
    string s;
    cin >> s;

    // アイテムの場所
    set<pair<int, int>> xy;
    for (int i = 0; i < m; i++) {
        int nx, ny;
        cin >> nx >> ny;
        xy.insert({nx, ny});
    }

    // RLUD = 0123
    vector<int> x_pos{1, -1, 0, 0};
    vector<int> y_pos{0, 0, 1, -1};

    int x_now = 0, y_now = 0;
    for (int i = 0; i < n; i++) {
        // 移動
        int pos = -1;
        if (s[i] == 'R') {
            pos = 0;
        } else if (s[i] == 'L') {
            pos = 1;
        } else if (s[i] == 'U') {
            pos = 2;
        } else if (s[i] == 'D') {
            pos = 3;
        }
        x_now += x_pos[pos];
        y_now += y_pos[pos];

        // 体力の増減と判定
        h--;
        if (h < 0) {
            cout << "No" << endl;
            return 0;
        }
        if (h < k && xy.find({x_now, y_now}) != xy.end()) {
            h = k;
            xy.erase({x_now, y_now});
        }
        // cout << x_now << " " << y_now << " "
        //      << "h: " << h << endl;
    }
    cout << "Yes" << endl;
    return 0;
}
