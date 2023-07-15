#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    int n, p, q;
    cin >> n >> p >> q;
    int ans = p;
    for (int i = 0; i < n; i++) {
        int d;
        cin >> d;
        ans = min(ans, q + d);
    }
    cout << ans << endl;
}
