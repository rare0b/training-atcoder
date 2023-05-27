#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    ll x, y, z;
    cin >> x >> y >> z;
    string s;
    cin >> s;

    // dp CapsLock on/offでそれぞれ遷移
    ll sz = s.length();
    ll INF = 1e18;
    vector<ll> on(sz + 1, INF);
    vector<ll> off(sz + 1, INF);
    on[0] = z, off[0] = 0;
    for (ll i = 0; i < sz; i++) {
        ll on_time = 0, off_time = 0;

        // on/offのときの各入力時間
        if (s[i] == 'a') {
            on_time = y;
            off_time = x;
        } else if (s[i] == 'A') {
            on_time = x;
            off_time = y;
        }

        on[i + 1] = min(on[i] + on_time, z + off[i] + off_time);
        off[i + 1] = min(off[i] + off_time, z + on[i] + on_time);
    }

    // for (ll i = 0; i <= sz; i++) {
    //     cout << on[i] << " " << off[i] << endl;
    // }

    cout << min(on[sz], off[sz]) << endl;
}
