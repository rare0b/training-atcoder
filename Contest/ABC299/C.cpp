#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    int n;
    string s;
    cin >> n >> s;
    bool flag = false;
    int ans = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        // cout << s[i] << " ";
        if (s[i] == '-') {
            flag = true;
            ans = max(ans, cnt);
            cnt = 0;
            // cout << ans << endl;
        } else {
            cnt++;
            // cout << ans << endl;
        }
        if (flag) ans = max(ans, cnt);
    }

    if (ans == 0) ans = -1;
    cout << ans << endl;
}