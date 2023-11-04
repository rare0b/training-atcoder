#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    int l = 1500;
    int n;
    cin >> n;
    vector<int> x(n), y(n);
    vector<vector<int>> d(l, vector<int>(l));
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
        d[y[i] - 1][x[i] - 1]++;
    }

    vector<vector<int>> z(l + 1, vector<int>(l + 1));
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < l; j++) {
            z[i + 1][j + 1] = z[i][j + 1] + d[i][j];
        }
    }
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < l; j++) {
            z[i + 1][j + 1] += z[i + 1][j];
        }
    }

    // for (int i = 0; i < 10; i++) {
    //     for (int j = 0; j < 10; j++) {
    //         cout << z[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int ans = z[d][c] - z[d][a - 1] - z[b - 1][c] + z[b - 1][a - 1];
        cout << ans << endl;
    }
}
