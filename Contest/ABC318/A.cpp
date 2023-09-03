#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    int n, m, p;
    cin >> n >> m >> p;
    if (n < m) {
        cout << 0 << endl;
        return 0;
    }

    int ans = 1;
    n -= m;
    while (n - p >= 0) {
        ans++;
        n -= p;
    }

    cout << ans << endl;
}
