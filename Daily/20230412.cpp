#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://algo-method.com/submissions/939031

struct edge {
    int to;
    int weight;
};

int main() {
    int N, M;
    cin >> N >> M;
    vector<vector<edge>> G(N);
    for (int i = 0; i < M; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        G[u].push_back({v, w});
    }

    for (int i = 0; i < N; i++) {
        int ans = -1, w = 1e9;
        for (auto v : G[i]) {
            if (v.weight < w) {
                ans = v.to;
                w = v.weight;
            } else if (v.weight == w) {
                ans = min(ans, v.to);
            }
        }
        cout << ans << endl;
    }
}