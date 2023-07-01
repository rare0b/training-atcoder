#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    int n;
    cin >> n;
    vector<pair<long double, int>> ans(n);
    for (int i = 0; i < n; i++) {
        long double a, b;
        cin >> a >> b;
        ans[i].first = a / (a + b);
        ans[i].second = -1 * (i + 1);
    }

    sort(ans.begin(), ans.end(), greater<pair<long double, int>>());

    for (int i = 0; i < n; i++) {
        cout << ans[i].second * -1 << " \n"[i == n - 1];
    }
}
