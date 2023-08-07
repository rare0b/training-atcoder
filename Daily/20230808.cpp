#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/abc133/tasks/abc133_b

int main() {
    int n, d;
    cin >> n >> d;
    vector<vector<int>> x(n, vector<int>(d));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < d; j++) {
            cin >> x[i][j];
        }
    }

    int ans = 0;
    for (int y = 0; y < n; y++) {
        for (int z = y + 1; z < n; z++) {
            int sum = 0;
            for (int j = 0; j < d; j++) {
                sum += pow(x[y][j] - x[z][j], 2);
            }
            if (pow((int)sqrt(sum), 2) == sum) {
                ans++;
            }
        }
    }

    cout << ans << endl;
}
