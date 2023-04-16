#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://algo-method.com/tasks/989

struct edge {
    int from;
    int to;
    int weight;
};

int INF = 1e9;

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
    auto pre_d = d;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int u = G[j].from, v = G[j].to, w = G[j].weight;
            d[v] = min(d[v], d[u] + w);
        }
        if (i == n - 2) pre_d = d;
    }

    if (pre_d != d)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
