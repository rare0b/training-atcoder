#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/abc094/tasks/abc094_b

int main() {
    int n, m, x;
    cin >> n >> m >> x;
    vector<int> a(n + 1, 0);
    for (int i = 0; i < m; i++) {
        int nx;
        cin >> nx;
        a[nx] = 1;
    }
    int v0 = 0;
    int vn = 0;
    for (int i = x; i >= 0; i--) {
        v0 += a[i];
    }
    for (int i = x; i <= n; i++) {
        vn += a[i];
    }

    cout << min(v0, vn) << endl;
}
