#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    ll n;
    cin >> n;
    priority_queue<ll, vector<ll>, greater<ll>> pq;
    for (ll i = 0; i < n; i++) {
        ll s, c;
        cin >> s >> c;
        while (c != 0) {
            if (c % 2 == 1) {
                pq.push(s);
            }
            c /= 2;
            s *= 2;
        }
    }

    ll ans = 0;
    while (!pq.empty()) {
        ll x = pq.top();
        pq.pop();

        if (!pq.empty() && x == pq.top()) {
            pq.pop();
            pq.push(x * 2);
        } else {
            ans++;
        }
    }

    cout << ans << endl;
}
