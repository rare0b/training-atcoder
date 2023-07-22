#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    int n, d;
    cin >> n >> d;

    vector<string> ss(n);
    for (int i = 0; i < n; i++) cin >> ss[i];

    vector<bool> hima(d, true);
    for (int i = 0; i < d; i++) {
        for (int j = 0; j < n; j++) {
            if (ss[j][i] == 'x') hima[i] = false;
        }
    }

    int ans = 0;
    int cnt = 0;
    for (int i = 0; i < d; i++) {
        // cout << hima[i];
        if (hima[i]) {
            cnt++;
        } else {
            ans = max(ans, cnt);
            cnt = 0;
        }
    }
    ans = max(ans, cnt);

    // cout << endl;
    cout << ans << endl;
}
