#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/abc048/tasks/abc048_b

int main() {
    ll a, b, x;
    cin >> a >> b >> x;
    ll ans = 0;
    if (a == 0) {
        ans = b / x + 1;
    } else {
        ans = b / x - (a - 1) / x;
    }
    cout << ans << '\n';
    return 0;
}
