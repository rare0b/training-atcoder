#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// https://algo-method.com/tasks/1008/editorial

struct edge {
    int to;
    int leng;
};

const int INF = 1e9;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<edge>> G(n);
    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        G[u].push_back({v, w});
    }

    vector<int> dist(n, INF);
    dist[0] = 0;
    vector<bool> done(n, false);
    priority_queue<pair<int, int>, vector<pair<int, int>>,
                   greater<pair<int, int>>>
        pq;
    for (int i = 0; i < n; i++) {
        pq.emplace(dist[i], i);
    }

    while (!pq.empty()) {
        auto [d, v] = pq.top();
        pq.pop();
        if (done[v]) continue;

        for (auto e : G[v]) {
            if (dist[e.to] > dist[v] + e.leng) {
                dist[e.to] = dist[v] + e.leng;
                pq.emplace(dist[e.to], e.to);
            }
        }

        done[v] = true;
    }

    for (int i = 0; i < n; i++) {
        cout << dist[i] << endl;
    }
}
