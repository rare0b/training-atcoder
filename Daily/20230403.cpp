#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/abc296/tasks/abc296_e

int main() {
    int n;
    cin >> n;
    vector<int> a(n + 1, 0);
    scc_graph g(n + 1);
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        g.add_edge(i, a[i]);
        if (i == a[i]) ans++;
    }

    for (auto x : g.scc()) {
        if (x.size() >= 2) ans += x.size();
    }

    cout << ans << endl;
}
