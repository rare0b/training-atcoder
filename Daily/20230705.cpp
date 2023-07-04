#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// https://algo-method.com/tasks/953

void rec(int v, vector<vector<int>> &G, vector<bool> &seen) {
    seen[v] = true;
    for (auto nv : G[v]) {
        if (seen[nv]) continue;
        rec(nv, G, seen);
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> G(n);
    vector<bool> seen(n);
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
    }

    rec(0, G, seen);

    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (!seen[i]) ans++;
    }

    cout << ans << endl;
}
