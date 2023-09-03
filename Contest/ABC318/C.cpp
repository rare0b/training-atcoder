#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    ll n, d, p;
    cin >> n >> d >> p;
    vector<ll> f(n);
    for (ll i = 0; i < n; i++) cin >> f[i];
    sort(f.begin(), f.end(), greater<ll>());

    vector<ll> cs(n, 0);
    for (ll i = 0; i < d; i++) {
        if (i >= n) break;
        cs[0] += f[i];
    }
    for (ll i = 1; i < n; i++) {
        cs[i] = cs[i - 1];
        cs[i] -= f[i - 1];
        if (i + d < n) cs[i] += f[i + d];
    }

    ll index = 0;
    ll ans = 0;
    while (index < n) {
        if (cs[index] >= p) {
            ans += p;
            index += d;
        } else {
            ans += f[index];
            index++;
        }
    }

    cout << ans << endl;
}
