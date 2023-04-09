#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    ll n, d;
    cin >> n >> d;
    vector<ll> t(n);
    for (int i = 0; i < n; i++) cin >> t[i];
    for (int i = 1; i < n; i++) {
        if (t[i] - t[i - 1] <= d) {
            cout << t[i] << endl;
            return 0;
        }
    }
    cout << -1 << endl;
}