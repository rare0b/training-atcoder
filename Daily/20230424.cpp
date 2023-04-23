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
    for (int i = a; i < b; i++) {
        for (int j = i + 1; j <= b; j++) {
            ans = max(ans, gcd(i, j));
        }
    }

    cout << ans << endl;
}
