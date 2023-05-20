#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    // 縦0 横1 ななめ2
    int H, W;
    cin >> H >> W;
    vector<string> S(H);
    for (int i = 0; i < H; i++) cin >> S[i];

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (S[i][j] == 's') {
                vector<pair<int, int>> p;
                p.push_back({i, j});
                string s = "s";
                if (i + 4 < H) {
                    for (int cnt = 1; cnt < 5; cnt++) {
                        s += S[i + cnt][j];
                        p.push_back({i + cnt, j});
                    }
                    if (s == "snuke") {
                        for (auto x : p) {
                            cout << x.first + 1 << " " << x.second + 1 << endl;
                        }
                        return 0;
                    }
                }
                p.clear();
                p.push_back({i, j});
                s = "s";
                if (j + 4 < W) {
                    for (int cnt = 1; cnt < 5; cnt++) {
                        s += S[i][j + cnt];
                        p.push_back({i, j + cnt});
                    }
                    if (s == "snuke") {
                        for (auto x : p) {
                            cout << x.first + 1 << " " << x.second + 1 << endl;
                        }
                        return 0;
                    }
                }
                p.clear();
                p.push_back({i, j});
                s = "s";
                if (j - 4 >= 0) {
                    for (int cnt = 1; cnt < 5; cnt++) {
                        s += S[i][j - cnt];
                        p.push_back({i, j - cnt});
                    }
                    if (s == "snuke") {
                        for (auto x : p) {
                            cout << x.first + 1 << " " << x.second + 1 << endl;
                        }
                        return 0;
                    }
                }
                p.clear();
                p.push_back({i, j});
                s = "s";
                if (i - 4 >= 0) {
                    for (int cnt = 1; cnt < 5; cnt++) {
                        s += S[i - cnt][j];
                        p.push_back({i - cnt, j});
                    }
                    if (s == "snuke") {
                        for (auto x : p) {
                            cout << x.first + 1 << " " << x.second + 1 << endl;
                        }
                        return 0;
                    }
                }
                p.clear();
                p.push_back({i, j});
                s = "s";
                if (i + 4 < H && j + 4 < W) {
                    for (int cnt = 1; cnt < 5; cnt++) {
                        s += S[i + cnt][j + cnt];
                        p.push_back({i + cnt, j + cnt});
                    }
                    if (s == "snuke") {
                        for (auto x : p) {
                            cout << x.first + 1 << " " << x.second + 1 << endl;
                        }
                        return 0;
                    }
                }
                p.clear();
                p.push_back({i, j});
                s = "s";
                if (i + 4 < H && j - 4 >= 0) {
                    for (int cnt = 1; cnt < 5; cnt++) {
                        s += S[i + cnt][j - cnt];
                        p.push_back({i + cnt, j - cnt});
                    }
                    if (s == "snuke") {
                        for (auto x : p) {
                            cout << x.first + 1 << " " << x.second + 1 << endl;
                        }
                        return 0;
                    }
                }
                p.clear();
                p.push_back({i, j});
                s = "s";
                if (i - 4 >= 0 && j + 4 < W) {
                    for (int cnt = 1; cnt < 5; cnt++) {
                        s += S[i - cnt][j + cnt];
                        p.push_back({i - cnt, j + cnt});
                    }
                    if (s == "snuke") {
                        for (auto x : p) {
                            cout << x.first + 1 << " " << x.second + 1 << endl;
                        }
                        return 0;
                    }
                }
                p.clear();
                p.push_back({i, j});
                s = "s";
                if (i - 4 >= 0 && j - 4 >= 0) {
                    for (int cnt = 1; cnt < 5; cnt++) {
                        s += S[i - cnt][j - cnt];
                        p.push_back({i - cnt, j - cnt});
                    }
                    if (s == "snuke") {
                        for (auto x : p) {
                            cout << x.first + 1 << " " << x.second + 1 << endl;
                        }
                        return 0;
                    }
                }
            }
        }
    }
}
