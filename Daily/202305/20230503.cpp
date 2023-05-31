#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/abc193/tasks/abc193_c

int main() {
    ll N;
    cin >> N;
    ll ans = N;
    set<ll> s;
    for (ll a = 2; a * a <= N + 1; a++) {
        ll x = a * a;
        while (x <= N) {
            s.insert(x);
            x *= a;
        }
    }

    ans -= s.size();
    cout << ans << endl;
}
