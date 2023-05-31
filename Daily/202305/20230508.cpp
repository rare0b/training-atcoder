#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/panasonic2020/tasks/panasonic2020_b

int main() {
    ll H, W;
    cin >> H >> W;
    if (H == 1 || W == 1)
        cout << 1 << endl;
    else
        cout << ((H + 1) / 2) * ((W + 1) / 2) + (H / 2) * (W / 2) << endl;
}
