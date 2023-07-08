#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//
void bfs(int v, vector<vector<int>> &G, vector<bool> &seen, vector<int> &cnt) {
    seen[v] = true;

    queue<int> q;
    q.push(v);
    while (!q.empty()) {
        int vv = q.front();
        q.pop();
        seen[vv] = true;

        for (auto nv : G[vv]) {
            cnt[nv] = min(cnt[nv], cnt[vv] + 1);

            if (!seen[nv]) q.push(nv);
        }
    }
}

int main() {
    // ダイクストラで、N1で1から一番遠い頂点までの辺の数+N2でnから一番遠い頂点までの辺の数+1を求める
    // 深さ優先探索かな？？せいぜいM(3*10^5)辺しかないし。幅でもいいけど。

    int n1, n2, m;
    cin >> n1 >> n2 >> m;
    int n = n1 + n2;
    vector<vector<int>> G(n);
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    vector<bool> seen(n, false);
    vector<int> cnt(n, 1e9);
    cnt[0] = 0, cnt[n - 1] = 0;
    bfs(0, G, seen, cnt);
    bfs(n - 1, G, seen, cnt);

    // for (auto nx : cnt) cout << nx << " ";
    // cout << endl;

    int max_n1 = 0, max_n2 = 0;
    for (int i = 0; i < n1; i++) {
        max_n1 = max(max_n1, cnt[i]);
        // cout << i << " ";
    }
    // cout << endl;
    for (int i = n1; i < n; i++) {
        max_n2 = max(max_n2, cnt[i]);
        // cout << i << " ";
    }
    // cout << endl;

    cout << max_n1 + max_n2 + 1 << endl;
}
