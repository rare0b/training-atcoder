#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    ll n, k;
    cin >> n >> k;
    vector<pair<ll, ll>> ab(n);
    ll sum = 0;
    for (ll i = 0; i < n; i++) {
        cin >> ab[i].first >> ab[i].second;
        sum += ab[i].second;
    }
    if (sum <= k) {
        cout << 1 << endl;
        return 0;
    }

    sort(ab.begin(), ab.end());

    for (ll i = 0; i < n; i++) {
        sum -= ab[i].second;
        if (sum <= k) {
            cout << ab[i].first + 1 << endl;
            return 0;
        }
    }
}
