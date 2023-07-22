#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

struct cell {
    int y;
    int x;
};

int main() {
    int n, m;
    cin >> n >> m;
    vector<string> grid(n);
    for (int i = 0; i < n; i++) cin >> grid[i];

    vector<vector<bool>> seen(n, vector<bool>(m, false));
    vector<vector<bool>> ok(n, vector<bool>(m, false));
    queue<cell> q;
    q.push({1, 1});

    vector<int> py = {0, 1, 0, -1};
    vector<int> px = {1, 0, -1, 0};

    while (!q.empty()) {
        cell p = q.front();
        q.pop();
        if (seen[p.y][p.x]) continue;

        seen[p.y][p.x] = true;
        ok[p.y][p.x] = true;

        for (int i = 0; i < 4; i++) {
            int cy = p.y;
            int cx = p.x;
            while (grid[cy + py[i]][cx + px[i]] != '#') {
                cy = cy + py[i];
                cx = cx + px[i];
                ok[cy][cx] = true;
            }
            if (!seen[cy][cx]) q.push({cy, cx});
        }
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (ok[i][j]) ans++;
        }
    }

    cout << ans << endl;
}
