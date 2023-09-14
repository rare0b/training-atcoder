#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/abc142/tasks/abc142_d

map<int, int> prime_factorization(ll x) {
    ll div = 2;
    map<int, int> mp;
    while (div <= sqrt(x)) {
        if (x % div == 0) {
            mp[div]++;
            x /= div;
        } else {
            div++;
        }
    }
    if (x != 1) {
        mp[x]++;
    }
    return mp;
}

int main() {
    ll a, b;
    cin >> a >> b;
    map<int, int> a_div, b_div;
    a_div = prime_factorization(a);
    b_div = prime_factorization(b);

    int ans = 1;
    for (auto itr = a_div.begin(); itr != a_div.end(); itr++) {
        // cout << itr->first << endl;
        if (b_div[itr->first]) ans++;
    }
    cout << ans << endl;
}
