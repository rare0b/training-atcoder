#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/abc138/tasks/abc138_c

int main() {
    double n;
    cin >> n;
    vector<double> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());
    double ans = (v[0] + v[1]) / 2;
    for (int i = 2; i < n; i++) {
        ans = (ans + v[i]) / 2;
    }
    cout << ans << endl;
    return 0;
}
