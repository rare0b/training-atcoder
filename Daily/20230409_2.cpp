#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/abc133/tasks/abc133_d

int main() {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        a[i] *= 2;
    }
    vector<ll> ans(n, 0);
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0)
            ans[0] += a[i];
        else
            ans[0] -= a[i];
    }
    ans[0] /= 2;
    cout << ans[0] << " ";
    for (int i = 1; i < n; i++) {
        if (i == n - 1)
            ans[i] = a[n - 1] - ans[0];
        else
            ans[i] = a[i - 1] - ans[i - 1];
        cout << ans[i] << " \n"[i == n - 1];
    }
}
