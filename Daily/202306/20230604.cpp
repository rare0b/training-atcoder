#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/abc304/editorial/6499

int min_value(map<pair<int, int>, int> mp) {
    int m = 1e9;
    for (auto x : mp) {
        m = min(m, x.second);
    }
    return m;
}

int max_value(map<pair<int, int>, int> mp) {
    int m = 0;
    for (auto x : mp) {
        m = max(m, x.second);
    }
    return m;
}

int main() {
    int w, h;
    cin >> w >> h;
    int n;
    cin >> n;
    vector<int> p(n), q(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i] >> q[i];
    }

    int a;
    cin >> a;
    vector<int> aa(a);
    for (int i = 0; i < a; i++) cin >> aa[i];
    int b;
    cin >> b;
    vector<int> bb(b);
    for (int i = 0; i < b; i++) cin >> bb[i];

    sort(aa.begin(), aa.end());
    sort(bb.begin(), bb.end());

    map<pair<int, int>, int> mp;
    for (int i = 0; i < n; i++) {
        int va = *lower_bound(aa.begin(), aa.end(), p[i]);
        int vb = *lower_bound(bb.begin(), bb.end(), q[i]);
        mp[{va, vb}]++;
    }
    // for (auto x : mp) {
    //     cout << x.first.first << " " << x.first.second << " " << x.second
    //          << endl;
    // }

    int m = 1e9;
    int M = 0;
    if (mp.size() < (a + 1) * (b + 1))
        m = 0;
    else
        m = min_value(mp);

    M = max_value(mp);

    cout << m << " " << M << endl;
}
