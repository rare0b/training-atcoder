#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    int n, t;
    cin >> n >> t;
    vector<int> c(n), r(n);
    for (int i = 0; i < n; i++) cin >> c[i];
    for (int i = 0; i < n; i++) cin >> r[i];

    int ans = -1;
    int M = -1;
    auto x = find(c.begin(), c.end(), t);
    if (x == c.end()) t = c[0];
    for (int i = 0; i < n; i++) {
        if (t == c[i] && M < r[i]) {
            ans = i + 1;
            M = r[i];
        }
    }
    cout << ans << endl;
}