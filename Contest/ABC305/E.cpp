#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

vector<bool> seen;
bool dfs(const vector<vector<int>> &G, const vector<int> &ok, int v, int cnt) {
    seen[v] = true;  // v を訪問済にする
    if (ok[v] && cnt <= ok[v]) return true;

    // v から行ける各頂点 next_v について
    for (auto next_v : G[v]) {
        if (seen[next_v]) continue;  // next_v が探索済だったらスルー
        dfs(G, ok, next_v, cnt + 1);  // 再帰的に探索
    }
    return false;
}

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<vector<int>> G(n);
    vector<int> ok(n, 0);
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        a--, b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    for (int i = 0; i < k; i++) {
        int p, h;
        cin >> p >> h;
        p--;
        ok[p] = h;
    }

    int ans_cnt = 0;
    for (int i = 0; i < n; i++) {
        // 頂点 0 をスタートとした探索
        seen.assign(n, false);  // 全頂点を「未訪問」に初期化
        if (ok[i] || dfs(G, ok, i, 0)) {
            if (ans_cnt != 0) cout << " ";
            cout << i + 1;
            ans_cnt++;
        }
    }
    cout << endl;
}
