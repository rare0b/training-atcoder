#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n), b(m);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];
    auto c = convolution<998244353>(a, b);
    for (int i = 0; i < n + m - 1; i++) {
        cout << c[i] << " \n"[i == n + m - 2];
    }
}
