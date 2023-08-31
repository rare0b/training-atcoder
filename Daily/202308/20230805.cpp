#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

bool check(ll x, ll n, ll k, vector<ll> a) {
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        sum += x / a[i];
    }

    if (sum >= k) return true;
    return false;
}

int main() {
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    ll ng = 0, ok = 1e9;
    while (ok - ng > 1) {
        int mid = (ok + ng) / 2;
        if (check(mid, n, k, a)) {
            ok = mid;
        } else {
            ng = mid;
        }
    }

    cout << ok << endl;
}
