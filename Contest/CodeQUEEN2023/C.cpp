#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int, int>;

//

int n, s, t;

void bfs(vector<vector<int>> &G, vector<int> &dis, int x) {
    queue<int> q;
    vector<bool> seen(n, false);
    q.push(x);
    seen[x] = true;
    while (!q.empty()) {
        int v = q.front();
        q.pop();
        for (auto nv : G[v]) {
            dis[nv] = min(dis[nv], dis[v] + 1);
            if (!seen[nv]) q.push(nv);
            seen[nv] = true;
        }
    }
}

int main() {
    cin >> n >> s >> t;
    s--, t--;
    vector<vector<int>> G(n);

    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        u--, v--;

        G[u].push_back(v);
        G[v].push_back(u);
    }

    vector<int> s_dis(n, 1e9);
    s_dis[s] = 0;
    vector<int> t_dis(n, 1e9);
    t_dis[t] = 0;

    bfs(G, s_dis, s);
    bfs(G, t_dis, t);

    for (int i = 0; i < n; i++) {
        cout << s_dis[i] << endl;
    }
}
