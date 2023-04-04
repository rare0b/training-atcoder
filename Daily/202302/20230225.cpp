#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// https://atcoder.jp/contests/abc186/tasks/abc186_d

int main() {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    ll ans = 0;
    int x = n - 1;
    for (int i = 0, j = n - 1; i < n; i++, j--) {
        ans += a[j] * x - a[i] * x;
        x--;
    }

    cout << ans << endl;
}