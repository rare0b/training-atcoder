#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    int n, m;
    cin >> n >> m;
    vector<string> c(n);
    for (int i = 0; i < n; i++) cin >> c[i];

    vector<string> d(m);
    vector<int> p(m);
    int df;
    for (int i = 0; i < m; i++) cin >> d[i];
    cin >> df;
    for (int i = 0; i < m; i++) cin >> p[i];

    int ans = 0;
    for (int i = 0; i < n; i++) {
        auto itr = find(d.begin(), d.end(), c[i]);
        if (itr == d.end()) {
            ans += df;
        } else {
            ans += p[distance(d.begin(), itr)];
        }
    }

    cout << ans << endl;
}
