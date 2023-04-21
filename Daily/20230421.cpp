#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/abc259/tasks/abc259_d

int main() {
    ll n;
    cin >> n;
    pair<ll, ll> s, t;
    cin >> s.first >> s.second >> t.first >> t.second;
    vector<ll> x(n), y(n), r(n);
    for (ll i = 0; i < n; i++) cin >> x[i] >> y[i] >> r[i];

    // 円の条件分岐、5通り
    // 接するか交わる円をひとまとまりに見て、その中のいずれかの円がそれぞれ始点・終点を含めば良い

    // i番目の円をiとして、N^2全探索UnionFind
    // 始点と接する円、終点と接する円の組み合わせを全探索して、1つでも同じグループに属していればOK
    // 3000 * 3000 = 9000000で十分間に合う
    // 距離の計算でもしかしたらオーバーフローするので、long longにする

    dsu d(n);
    for (ll i = 0; i < n; i++) {
        for (ll j = i + 1; j < n; j++) {
            ll sub_r = (r[i] - r[j]) * (r[i] - r[j]);
            ll sum_r = (r[i] + r[j]) * (r[i] + r[j]);
            ll dist =
                (x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]);
            if (sub_r <= dist && dist <= sum_r) {
                d.merge(i, j);
            }
        }
    }

    vector<ll> sl, tl;
    for (ll i = 0; i < n; i++) {
        ll dist = (x[i] - s.first) * (x[i] - s.first) +
                  (y[i] - s.second) * (y[i] - s.second);
        if (dist == (r[i]) * (r[i])) sl.push_back(i);
    }
    for (ll i = 0; i < n; i++) {
        ll dist = (x[i] - t.first) * (x[i] - t.first) +
                  (y[i] - t.second) * (y[i] - t.second);
        if (dist == (r[i]) * (r[i])) tl.push_back(i);
    }

    // for (auto x : d.groups()) {
    //     for (auto y : x) {
    //         cout << y << " ";
    //     }
    //     cout << endl;
    // }

    // for (auto x : sl) {
    //     cout << x << " ";
    // }
    // cout << endl;
    // for (auto x : tl) {
    //     cout << x << " ";
    // }
    // cout << endl;

    bool flag = false;
    for (ll i = 0; i < ll(sl.size()); i++) {
        for (ll j = 0; j < ll(tl.size()); j++) {
            if (d.same(sl[i], tl[j])) flag = true;
        }
    }

    if (flag)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
