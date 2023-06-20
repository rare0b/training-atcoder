#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    int a[5];
    cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];
    int ind = 0;
    int x = 10;
    for (int i = 0; i < 5; i++) {
        if (a[i] % 10 <= x && a[i] % 10 != 0) {
            ind = i;
            x = a[i] % 10;
        }
    }

    int ans = 0;
    for (int i = 0; i < 5; i++) {
        if (i == ind) {
            ans += a[i];
        } else {
            ans += (a[i] + 10 - 1) / 10 * 10;
        }
    }
    cout << ans << endl;
}
