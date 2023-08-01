#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/agc024/tasks/agc024_a

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    ll k;
    cin >> k;
    if (k % 2 == 0) {
        cout << a - b << endl;
    } else {
        cout << b - a << endl;
    }
}
