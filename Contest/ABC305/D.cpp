#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    vector<ll> dp(n, 0);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        if (i && i % 2 == 0) {
            dp[i] = dp[i - 1] + a[i] - a[i - 1];
            if (i != n - 1) dp[i + 1] = dp[i];
        }
        // cout << dp[i] << " ";
    }
    // cout << endl;
    ll q;
    cin >> q;
    for (ll i = 0; i < q; i++) {
        ll l, r;
        cin >> l >> r;
        auto l_pos = lower_bound(a.begin(), a.end(), l);
        auto r_pos = lower_bound(a.begin(), a.end(), r);

        ll l_idx = distance(a.begin(), l_pos);
        ll r_idx = distance(a.begin(), r_pos);
        // cout << l << " " << *l_pos << " " << l_idx << " " << dp[l_idx] <<
        // endl; cout << r << " " << *r_pos << " " << r_idx << " " << dp[r_idx]
        // << endl;

        ll l_val = dp[l_idx], r_val = dp[r_idx];
        if (l_idx && l_idx % 2 == 0) {
            l_val -= (a[l_idx] - l);
        }
        if (r_idx && r_idx % 2 == 0) {
            r_val -= (a[r_idx] - r);
        }

        // cout << l_val << " " << r_val << endl;
        ll ans = r_val - l_val;
        cout << ans << endl;
    }
}
