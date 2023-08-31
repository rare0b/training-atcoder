#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/abc050/tasks/abc050_b

int main() {
    int n;
    cin >> n;
    vector<int> t(n);
    for (int i = 0; i < n; i++) cin >> t[i];
    int m;
    cin >> m;
    vector<int> p(m), x(m);
    for (int i = 0; i < m; i++) cin >> p[i] >> x[i];

    for (int i = 0; i < m; i++) {
        auto tmp_t = t;
        tmp_t[p[i] - 1] = x[i];

        int ans = 0;
        for (int i = 0; i < n; i++) {
            ans += tmp_t[i];
        }

        cout << ans << endl;
    }
}
