#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/abc140/tasks/abc140_c

int main() {
    int n;
    cin >> n;
    vector<int> a(n), b(n - 1);
    for (int i = 0; i < n - 1; i++) {
        cin >> b[i];
    }

    a[0] = b[0];
    a[n - 1] = b[n - 2];
    for (int i = 1; i < n - 1; i++) {
        a[i] = min(b[i - 1], b[i]);
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans += a[i];
        // cout << a[i] << " ";
    }
    // cout << endl;

    cout << ans << endl;
}
