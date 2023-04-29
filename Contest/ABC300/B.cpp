#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    // 今回のように、↑へフィールド外に出たものが、↓から出てくるようなループ構造のとき
    // MODを思い出す。MODでだいたいのことはできる

    int H, W;
    cin >> H >> W;
    vector<string> A(H), B(H);
    for (int i = 0; i < H; i++) cin >> A[i];
    for (int i = 0; i < H; i++) cin >> B[i];

    for (int s = 0; s < H; s++) {
        for (int t = 0; t < W; t++) {
            bool flag = true;
            for (int i = 0; i < H; i++) {
                for (int j = 0; j < W; j++) {
                    int p = (i - s + H) % H, q = (j - t + W) % W;
                    if (A[p][q] != B[i][j]) flag = false;
                }
            }
            if (flag) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}
