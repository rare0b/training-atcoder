#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/abc302/tasks/abc302_e

int main() {
    int N, Q;
    cin >> N >> Q;
    vector<set<int>> e(N);
    int ans = N;
    for (int i = 0; i < Q; i++) {
        int x;
        cin >> x;
        if (x == 1) {
            int u, v;
            cin >> u >> v;
            u--;
            v--;
            if (e[u].empty()) ans--;
            if (e[v].empty()) ans--;
            e[u].insert(v);
            e[v].insert(u);
        } else {
            int v;
            cin >> v;
            v--;
            for (auto nx : e[v]) {
                auto itr = e[nx].find(v);
                e[nx].erase(itr);
                if (e[nx].empty()) ans++;
            }
            if (!e[v].empty()) {
                e[v].clear();
                ans++;
            }
        }
        cout << ans << endl;
    }
}
