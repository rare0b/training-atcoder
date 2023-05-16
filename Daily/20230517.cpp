#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/abc161/tasks/abc161_c

int main() {
    ll N, K;
    cin >> N >> K;
    ll div = N / K;
    ll plus = N - K * div;
    ll minus = N - K * (div + 1);
    ll ans = min({abs(plus), abs(minus)});
    cout << ans << endl;
    return 0;
}
