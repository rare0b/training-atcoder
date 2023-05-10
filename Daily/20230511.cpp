#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/agc014/tasks/agc014_a

int main() {
    ll A, B, C;
    cin >> A >> B >> C;
    ll cnt = 0;
    for (ll i = 0; i < 1000000000; i++) {
        ll pa = A, pb = B, pc = C;
        if (A % 2 == 0 && B % 2 == 0 && C % 2 == 0) {
            cnt++;
            ll na = (B + C) / 2, nb = (C + A) / 2, nc = (A + B) / 2;
            A = na, B = nb, C = nc;
        } else {
            cout << cnt << endl;
            return 0;
        }
        if (A == pa && B == pb && C == pc) break;
    }
    cout << -1 << endl;
    return 0;
}
