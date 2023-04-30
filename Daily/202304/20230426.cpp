#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/abc299/tasks/abc299_e

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> G(n);
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        u--;
        v--;
        G[u].push_back(v);
        G[v].push_back(u);
    }

    // 初期は全て黒、全頂点についてd未満の範囲を白に塗る
    int k;
    cin >> k;

    if (n == 1) {
        if (k == 0) {
            cout << "Yes" << endl;
            cout << 1 << endl;
        } else {
            int p, d;
            cin >> p >> d;
            if (d == 0) {
                cout << "Yes" << endl;
                cout << 1 << endl;
            } else {
                cout << "No" << endl;
            }
        }
        return 0;
    }

    vector<int> vert(n, 1);
    vector<vector<int>> dist(n, vector<int>(n, -1));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) dist[i][j] = 0;
        }
    }
    for (int i = 0; i < n; i++) {
        queue<int> q;
        q.push(i);
        while (!q.empty()) {
            int v = q.front();
            q.pop();

            for (int nv : G[v]) {
                if (dist[i][nv] == -1) {
                    dist[i][nv] = dist[i][v] + 1;
                    q.push(nv);
                } else {
                    continue;
                }
            }
        }
    }

    // for (auto x : dist) {
    //     for (auto y : x) {
    //         cout << y << " ";
    //     }
    //     cout << endl;
    // }

    vector<int> p(k), d(k);
    for (int i = 0; i < k; i++) {
        cin >> p[i] >> d[i];
        p[i]--;
        for (int j = 0; j < n; j++) {
            if (dist[p[i]][j] < d[i]) vert[j] = 0;
        }
    }

    // 塗り終わったグラフを判定
    for (int i = 0; i < k; i++) {
        int flag = 0;
        for (int j = 0; j < n; j++) {
            if (dist[p[i]][j] == d[i]) flag = max(flag, vert[j]);
        }
        if (!flag) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    for (int i = 0; i < n; i++) {
        cout << vert[i];
    }
    cout << endl;
}
