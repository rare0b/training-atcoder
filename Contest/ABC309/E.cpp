#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

void dfs(int v, int dps, vector<vector<int>> &G, vector<bool> &ok,
         vector<int> &cnt) {
    ok[v] = true;

    for (auto nv : G[v]) {
        ok[nv] = true;
        if (cnt[nv] < dps - 1) {
            cnt[nv] = dps - 1;
            dfs(nv, dps - 1, G, ok, cnt);
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> G(n);
    for (int i = 1; i < n; i++) {
        int p;
        cin >> p;
        G[p].push_back(i);
    }

    vector<bool> ok(n, false);
    vector<int> cnt(n, 0);
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        dfs(x, y, G, ok, cnt);
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (ok[i]) ans++;
    }

    cout << ans << endl;
}
