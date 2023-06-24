#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int ans = 0;
        for (int j = 0; j < 7; j++) {
            int a;
            cin >> a;
            ans += a;
        }
        cout << ans << " \n"[i == n - 1];
    }
}
