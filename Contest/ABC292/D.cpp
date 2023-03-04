#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    int n, m;
    cin >> n >> m;
    dsu d(n);
    vector<int> count(n, 0);
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        x--, y--;
        d.merge(x, y);
        count[d.leader(x)]++;
    }

    for (int i = 0; i < n; i++) {
        int sz = d.size(i);
        // cout << sz << " " << count[d.leader(i)] << endl;
        if (sz != count[d.leader(i)]) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}