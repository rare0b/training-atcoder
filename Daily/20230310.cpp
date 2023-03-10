#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/abc141/tasks/abc141_d

int main() {
    ll n, m;
    cin >> n >> m;
    multiset<ll> a;
    for (ll i = 0; i < n; i++) {
        ll x;
        cin >> x;
        a.insert(x);
    }

    for (ll i = 0; i < m; i++) {
        auto itr = a.end();
        ll v = *--itr / 2;
        a.erase(itr);
        a.insert(v);
    }

    ll ans = 0;
    auto itr = a.begin();

    for (ll i = 0; i < n; i++) {
        ans += *itr;
        itr++;
    }

    cout << ans << endl;
}