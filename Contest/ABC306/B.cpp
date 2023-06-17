#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    unsigned long long mul = 1;
    unsigned long long ans = 0;
    for (int i = 0; i < 64; i++) {
        unsigned long long a;
        cin >> a;
        ans += mul * a;
        mul *= 2;
    }

    cout << ans << endl;
}
