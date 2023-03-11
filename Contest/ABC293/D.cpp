#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

void r_or_b_to_true(vector<pair<bool, bool>>& rb, int x, char y) {
    if (y == 'R') {
        rb[x].first = true;
    } else {
        rb[x].second = true;
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    dsu ds(n);
    // pair.firstがR、secondがBの判定
    vector<pair<bool, bool>> rb(n, pair(false, false));

    for (int i = 0; i < m; i++) {
        int a, c;
        char b, d;
        cin >> a >> b >> c >> d;
        a--, c--;
        ds.merge(a, c);

        r_or_b_to_true(rb, a, b);
        r_or_b_to_true(rb, c, d);
    }

    // groupsの全探索でリーダーのRB両方OKなやつtrueにしてカウント++;
    vector<bool> flag(n, false);
    auto g = ds.groups();
    int ok = 0, ng = 0;
    for (auto x : g) {
        bool f = true;
        for (auto y : x) {
            flag[y] = true;
            if (rb[y].first && rb[y].second) {
                continue;
            } else {
                f = false;
            }
        }
        if (f)
            ok++;
        else
            ng++;
    }

    cout << ok << " " << ng << endl;
}