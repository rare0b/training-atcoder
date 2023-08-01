#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/abc158/tasks/abc158_b

int main() {
    ll n, a, b;
    cin >> n >> a >> b;
    ll tmp = n / (a + b);
    ll ans = tmp * a;

    ll last = n - tmp * (a + b);
    ans += min(last, a);

    cout << ans << endl;
}
