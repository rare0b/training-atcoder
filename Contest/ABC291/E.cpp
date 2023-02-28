#include <bits/stdc++.h>
using namespace std;
using ll = long long;

//

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> G(n);
    vector<int> deg(n, 0);
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        G[x].push_back(y);
        deg[y]++;
    }

    queue<int> q;
    vector<int> ans(n);
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (deg[i] == 0) {
            q.push(i);
        }
    }

    while (!q.empty()) {
        if (q.size() != 1) {
            cout << "No" << endl;
            return 0;
        }
        int v = q.front();
        q.pop();
        ans[v] = ++cnt;
        for (auto vv : G[v]) {
            if (!--deg[vv]) {
                q.push(vv);
            }
        }
    }

    cout << "Yes" << endl;
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " \n"[i == n - 1];
    }
}