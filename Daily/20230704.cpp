#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// https://algo-method.com/tasks/952

// struct edge {
//     int from;
//     int to;
// };

vector<bool> seen;

void rec(int v, vector<set<int>> G) {
    seen[v] = true;
    cout << v << " ";
    for (auto v2 : G[v]) {
        if (seen[v2]) continue;
        rec(v2, G);
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<set<int>> G(n);
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        G[a].insert(b);
    }
    for (int i = 0; i < n; i++) seen.push_back(false);

    rec(0, G);
    cout << endl;
}
