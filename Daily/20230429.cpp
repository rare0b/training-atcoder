#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/agc036/tasks/agc036_a

ll n = pow(10, 9);

int main() {
    ll S;
    cin >> S;
    vector<ll> x(3), y(3);
    x[0] = 0, y[0] = 0;
    x[1] = n, y[1] = 1;

    if (S % n == 0) {
        x[2] = 0;
        y[2] = S / n;
    } else {
        x[2] = n - S % n;
        y[2] = S / n + 1;
    }

    for (int i = 0; i < 3; i++) cout << x[i] << " " << y[i] << " \n"[i == 2];
}
