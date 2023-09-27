#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    int d, n;
    cin >> d >> n;
    vector<int> comp(d + 1);
    for (int i = 0; i < n; i++) {
        int l, r;
        cin >> l >> r;
        comp[l - 1]++;
        comp[r]--;
    }

    vector<int> ans(d);
    ans[0] = comp[0];
    for (int i = 1; i < d; i++) {
        ans[i] = ans[i - 1] + comp[i];
    }

    for (int i = 0; i < d; i++) {
        cout << ans[i] << endl;
    }
}
