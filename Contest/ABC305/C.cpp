#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    for (int i = 0; i < h; i++) cin >> s[i];

    int s_x = 501, s_y = 501, e_x = 0,
        e_y = 0;  // start&endの#の場所。minとmaxで求める
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (s[i][j] == '#') {
                s_x = min(s_x, j);
                s_y = min(s_y, i);
                e_x = max(e_x, j);
                e_y = max(e_y, i);
            }
        }
    }

    for (int i = s_y; i <= e_y; i++) {
        for (int j = s_x; j <= e_x; j++) {
            if (s[i][j] == '.') cout << i + 1 << " " << j + 1 << endl;
        }
    }
}
