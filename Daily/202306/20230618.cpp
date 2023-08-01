#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/abc306/tasks/abc306_e

int main() {
    ll n, k, q;
    cin >> n >> k >> q;
    vector<ll> a(n, 0);
    multiset<ll, greater<int>> x, y;
    for (ll i = 0; i < k; i++) {
        x.insert(0);
    }
    for (ll i = k; i < n; i++) {
        y.insert(0);
    }

    ll ans = 0;
    for (ll i = 0; i < q; i++) {
        ll xi, yi;
        cin >> xi >> yi;
        xi--;
        ll tmp_a = a[xi];
        a[xi] = yi;

        if (x.find(tmp_a) != x.end()) {
            auto itr = x.find(tmp_a);
            x.erase(itr);
            ans -= tmp_a;

            y.insert(yi);
            itr = y.begin();
            ans += *itr;

            x.insert(*itr);
            y.erase(itr);
        } else {
            auto itr = y.find(tmp_a);
            y.erase(itr);
            y.insert(yi);

            auto itr_x = x.end();
            itr_x--;
            auto itr_y = y.begin();
            ll xx = *itr_x;
            ll yy = *itr_y;
            if (yy > xx) {
                ans += yy - xx;
                x.erase(itr_x);
                y.erase(itr_y);
                x.insert(yy);
                y.insert(xx);
            }
        }
        cout << ans << endl;
    }
}
