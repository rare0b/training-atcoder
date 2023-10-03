#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/abc087/tasks/arc090_a

int main() {
    int n;
    cin >> n;
    vector<vector<int>> a(2, vector<int>(n));
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < n; j++) cin >> a[i][j];

    int ans = 0;
    for (int i = 0; i < n; i++) {
        int sum = 0;
        int j;
        for (j = 0; j <= i; j++) {
            sum += a[0][j];
        }
        sum += a[1][j - 1];
        for (; j < n; j++) {
            sum += a[1][j];
        }
        ans = max(ans, sum);
    }

    cout << ans << endl;
}
