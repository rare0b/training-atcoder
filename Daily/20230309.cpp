#include <bits/stdc++.h>

#include <atcoder/all>

using namespace atcoder;
using namespace std;
using ll = long long;

// https://atcoder.jp/contests/abc090/tasks/arc091_a

int main() {
    ll n, m;
    cin >> n >> m;

    if (n == 1) {
        if (m == 1) {
            cout << 1 << endl;
        } else if (m == 2) {
            cout << 0 << endl;
        } else {
            cout << m - 2 << endl;
        }
        return 0;
    }

    if (m == 1) {
        if (n == 1) {
            cout << 1 << endl;
        } else if (n == 2) {
            cout << 0 << endl;
        } else {
            cout << n - 2 << endl;
        }
        return 0;
    }

    ll ans = (m - 2) * (n - 2);
    cout << ans << endl;
}