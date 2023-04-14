#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://algo-method.com/tasks/988

int INF = 1e9;

struct edge {
    int from;
    int to;
    int weight;
};

int main() {
    int n, m;
    cin >> n >> m;
    vector<edge> G;
    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        G.push_back({u, v, w});
    }

    vector<int> d(n, INF);
    d[0] = 0;
    int ans = 0;
    while (true) {
        ans++;
        auto pre_d = d;
        for (int i = 0; i < m; i++) {
            int u = G[i].from, v = G[i].to, w = G[i].weight;
            d[v] = min(d[v], d[u] + w);
        }

        if (pre_d == d) {
            cout << ans << endl;
            break;
        }
    }
}
