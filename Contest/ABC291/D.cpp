#include <bits/stdc++.h>
using namespace std;
using ll = long long;

//

int main() {
    const ll div = 998244353;
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }

    vector<ll> a_case(n, 0), b_case(n, 0);
    a_case[0] = 1, b_case[0] = 1;
    ll ans;
    for (int i = 1; i < n; i++) {
        if (a[i] != a[i - 1]) {
            a_case[i] = (a_case[i] + a_case[i - 1]) % div;
        }
        if (a[i] != b[i - 1]) {
            a_case[i] = (a_case[i] + b_case[i - 1]) % div;
        }
        if (b[i] != a[i - 1]) {
            b_case[i] = (b_case[i] + a_case[i - 1]) % div;
        }
        if (b[i] != b[i - 1]) {
            b_case[i] = (b_case[i] + b_case[i - 1]) % div;
        }
    }

    ans = (a_case[n - 1] + b_case[n - 1]) % div;
    cout << ans << endl;
}