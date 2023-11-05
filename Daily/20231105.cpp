#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    int h, w, n;
    cin >> h >> w >> n;
    vector<vector<int>> q(h + 2, vector<int>(w + 2, 0));
    for (int i = 0; i < n; i++) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        q[a][b]++;
        q[c + 1][d + 1]++;
        q[a][d + 1]--;
        q[c + 1][b]--;
    }

    vector<vector<int>> z = q;
    for (int i = 0; i < h + 2; i++) {
        for (int j = 0; j < w + 1; j++) {
            z[i][j + 1] += z[i][j];
        }
    }
    for (int i = 0; i < h + 1; i++) {
        for (int j = 0; j < w + 2; j++) {
            z[i + 1][j] += z[i][j];
        }
    }

    for (int i = 1; i < h + 1; i++) {
        for (int j = 1; j < w + 1; j++) {
            cout << z[i][j] << " ";
        }
        cout << endl;
    }
}
