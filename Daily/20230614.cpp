#include <bits/stdc++.h>
using namespace std;

// https://algo-method.com/tasks/993

struct edge {
    int to;
    int weight;
};

int main() {
    int INF = 1e9;
    int n, m;
    cin >> n >> m;
    vector<vector<edge>> edges(n);
    vector<int> d(n, INF);
    d[0] = 0;
    vector<bool> f(n, false);
    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        edges[u].push_back({v, w});
    }
    for (int i = 0; i < n; i++) {
        int x = 0, min_val = INF;
        for (int i = 0; i < n; i++) {
            if (!f[i] && min_val >= d[i]) {
                x = i;
                min_val = d[i];
            }
        }
        f[x] = true;
        for (auto e : edges[x]) {
            d[e.to] = min(d[e.to], d[x] + e.weight);
        }
    }
    for (int i = 0; i < n; i++) {
        cout << d[i] << endl;
    }
}