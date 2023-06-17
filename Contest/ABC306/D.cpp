#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    ll n;
    cin >> n;
    vector<ll> x(n), y(n);
    for (ll i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    vector<ll> healthy(n + 1, 0), upset(n + 1, 0);
    for (ll i = 0; i < n; i++) {
        if (x[i] == 0) {
            // 0…解毒
            // 健康&食べない、健康&食べる、不健康&食べる
            healthy[i + 1] =
                max({healthy[i], healthy[i] + y[i], upset[i] + y[i]});

            // 健康&食べないは遷移できず、食べたら健康になるので、不健康&食べないのみ
            upset[i + 1] = upset[i];
        } else {
            // 1…毒入り
            // 不健康&食べないは遷移できず、食べたら不健康になるので、健康&食べないのみ
            healthy[i + 1] = healthy[i];

            // 健康&食べる、不健康&食べない (※不健康&食べるは死ぬので選択しない)
            upset[i + 1] = max(healthy[i] + y[i], upset[i]);
        }
    }

    cout << max(healthy[n], upset[n]) << endl;
}
