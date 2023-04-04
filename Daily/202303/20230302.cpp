#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// https://atcoder.jp/contests/agc012/tasks/agc012_a

int main() {
    long n;
    cin >> n;
    vector<long> a(3 * n);
    for (long i = 0; i < 3 * n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    long ans = 0;
    for (long i = n; i < 3 * n; i += 2) {
        ans += a[i];
    }

    cout << ans << endl;
}