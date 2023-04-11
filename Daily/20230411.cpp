#include <bits/stdc++.h>

using namespace std;
using ll = long long;

// https://algo-method.com/tasks/985

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<pair<int, int>>> v(n);
    for (int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        v[b].push_back(pair(a, c));
    }

    int INF = 1e9;
    vector<int> dist(n, INF);
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            dist[i] = 0;
            continue;
        }

        for (auto e : v[i]) {
            dist[i] = min(dist[i], dist[e.first] + e.second);
        }
    }

    if (dist[n - 1] == INF)
        cout << -1 << endl;
    else
        cout << dist[n - 1] << endl;
}
