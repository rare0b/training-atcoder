#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/abc153/tasks/abc153_d

ll div2_helper(ll h, ll cnt, ll i) {
    if (h == 0) return cnt;
    return div2_helper(h / 2, cnt + i, i * 2);
}

ll div2(ll h) { return div2_helper(h, 0, 1); }

int main() {
    ll h;
    cin >> h;
    cout << div2(h) << endl;
}
