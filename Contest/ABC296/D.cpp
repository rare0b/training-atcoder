#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    ll n, m;
    cin >> n >> m;
    ll l = sqrt(m) + 1;
    ll ans = INFINITY;
    bool flag = false;
    if (n >= m) {
        cout << m << endl;
        return 0;
    }
    for (ll i = 1; i <= min(n, l); i++) {
        ll o;
        if (m % i == 0)
            o = m / i;
        else
            o = m / i + 1;

        if (o > n) continue;
        ans = min(ans, i * o);
        flag = true;
    }

    if (flag)
        cout << ans << endl;
    else
        cout << -1 << endl;
}