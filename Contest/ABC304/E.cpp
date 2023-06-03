#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    int n, m;
    cin >> n >> m;
    dsu ds(n);
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        u--, v--;
        ds.merge(u, v);
    }

    int k;
    cin >> k;
    set<pair<int, int>> st;
    for (int i = 0; i < k; i++) {
        int x, y;
        cin >> x >> y;
        x--, y--;
        int xl = ds.leader(x), yl = ds.leader(y);
        st.insert({xl, yl});
    }

    // for (auto x : st) cout << x.first << " " << x.second << endl;

    // 「代表元の組み合わせ一覧」を持つsetを定義
    // p, qを受け取り、代表元をそれぞれ求め、マージ
    // まず、どちらも代表元が変わっていなければ、良いグラフ
    // 変わっている場合、p, q(またはq,
    // p)の代表元の組み合わせをもつsetがなければ、良いグラフ

    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int p, q;
        cin >> p >> q;
        p--, q--;
        int pl = ds.leader(p), ql = ds.leader(q);
        if (st.find({pl, ql}) != st.end() || st.find({ql, pl}) != st.end()) {
            cout << "No" << endl;
            // cout << pl << " " << ql << endl;
        } else {
            cout << "Yes" << endl;
            // cout << pl << " " << ql << endl;
        }
    }
}
