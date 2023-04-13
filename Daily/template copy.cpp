#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://algo-method.com/submissions/940189

int INF = 1e9;

struct edge {
    int from;
    int to;
    int weight;
};

int main() {
    int N, M;
    cin >> N >> M;
    vector<vector<edge>> G(N);
    vector<int> d(N, INF);
    d[0] = 0;
    for (int i = 0; i < M; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        d[v] = min(d[v], d[u] + w);
    }
    for (int i = 0; i < N; i++) {
        cout << d[i] << endl;
    }
}
