#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    int H, W;
    cin >> H >> W;
    vector<string> C(H);
    for (int i = 0; i < H; i++) cin >> C[i];
    vector<int> ah, bh, aw, bw;

    for (int i = 0; i < H; i++) {
        int cnt = 0;
        for (int j = 0; j < W; j++) {
            char c = C[i][j];
            if (c == '#') cnt++;
        }
        ah.push_back(cnt);
    }
    for (int j = 0; j < W; j++) {
        int cnt = 0;
        for (int i = 0; i < H; i++) {
            char c = C[i][j];
            if (c == '#') cnt++;
        }
        aw.push_back(cnt);
    }

    for (int i = 0; i < H; i++) {
        int cnt = 0;
        for (int j = 0; j < W; j++) {
            char c = C[i][j];
            if (c == '#') cnt++;
        }
        bh.push_back(cnt);
    }
    for (int j = 0; j < W; j++) {
        int cnt = 0;
        for (int i = 0; i < H; i++) {
            char c = C[i][j];
            if (c == '#') cnt++;
        }
        bw.push_back(cnt);
    }

    sort(ah.begin(), ah.end());
    sort(bh.begin(), bh.end());
    sort(aw.begin(), aw.end());
    sort(bw.begin(), bw.end());

    if (bh == ah && bw == aw)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}