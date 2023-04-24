#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/jsc2021/tasks/jsc2021_c

int main() {
    int a, b;
    cin >> a >> b;

    int ans = 1;
    for (int i = b; i > 0; i--) {
        if (b / i - (a - 1) / i >= 2) ans = max(ans, i);
    }

    cout << ans << endl;
}
