#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/abc046/tasks/abc046_b

int main() {
    int n, k;
    cin >> n >> k;
    int ans = k;
    for (int i = 1; i < n; i++) {
        ans *= (k - 1);
    }

    cout << ans << endl;
}
