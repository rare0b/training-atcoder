#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    vector<int> d{3, 1, 4, 1, 5, 9};
    char p, q;
    cin >> p >> q;
    int pi = p - 'A';  // Aなら3になる
    int qi = q - 'A';

    int s = min(pi, qi), e = max(pi, qi);
    int ans = 0;
    for (int i = s; i < e; i++) {
        ans += d[i];
    }

    cout << ans << endl;
}
