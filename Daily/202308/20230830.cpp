#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    int n, t, a;
    cin >> n >> t >> a;
    t *= 1000, a *= 1000;

    int min_sub = 1e9;
    int sub = 6;
    int ans = 0;

    for (int i = 0; i < n; i++) {
        int h;
        cin >> h;
        int tmp = t - h * sub;
        if (abs(a - tmp) < min_sub) {
            min_sub = abs(a - tmp);
            ans = i + 1;
        }
    }
    cout << ans << endl;
}
