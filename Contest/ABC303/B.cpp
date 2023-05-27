#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(m, vector<int>(n));
    int cnt = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
            a[i][j]--;
        }
    }

    vector<vector<bool>> flag(n, vector<bool>(n, false));
    for (int i = 0; i < n; i++) {
        flag[i][i] = true;
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n - 1; j++) {
            flag[a[i][j]][a[i][j + 1]] = true;
            flag[a[i][j + 1]][a[i][j]] = true;
        }
    }

    // for (auto x : flag) {
    //     for (auto y : x) {
    //         cout << y << ' ';
    //     }
    //     cout << endl;
    // }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (!flag[i][j]) cnt++;
        }
    }

    cout << cnt / 2 << endl;
}
