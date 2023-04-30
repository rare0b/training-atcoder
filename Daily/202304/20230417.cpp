#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://algo-method.com/tasks/990

int INF = 1e9;
int MINUS_INF = -1e9;

struct edge {
    int from;
    int to;
    int weight;
};

int main() {
    int n, m;
    cin >> n >> m;
    vector<edge> G;

    // i < nとしていたらRE連発。後のj < mでG[j]にアクセスできず。
    // 入力の個数確認する。配列の大きさもできれば。
    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        G.push_back({u, v, w});
    }

    vector<int> d(n, INF);
    d[0] = 0;
    auto pre_d = d;
    for (int i = 0; i < 2 * n; i++) {
        for (int j = 0; j < m; j++) {
            int u = G[j].from, v = G[j].to, w = G[j].weight;
            if (d[u] != INF && d[u] != MINUS_INF)
                d[v] = min(d[v], d[u] + w);
            else
                d[v] = min(d[v], d[u]);

            if (i == n - 1 && d[v] != pre_d[v]) {
                d[v] = MINUS_INF;
            }
        }
        if (i == n - 2) pre_d = d;
    }

    if (d[n - 1] == INF)
        cout << "impossible" << endl;
    else if (d[n - 1] == MINUS_INF)
        cout << "-inf" << endl;
    else
        cout << d[n - 1] << endl;
}
