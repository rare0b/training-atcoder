#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/abc134/tasks/abc134_c

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int ans = 0;
    int ind = 0;
    for (int i = 0; i < n; i++) {
        if (ans < a[i]) {
            ans = a[i];
            ind = i;
        }
    }

    int ans_max = 0;
    for (int i = 0; i < n; i++) {
        if (i == ind) continue;
        ans_max = max(ans_max, a[i]);
    }

    for (int i = 0; i < n; i++) {
        if (i == ind)
            cout << ans_max << endl;
        else
            cout << ans << endl;
    }
}
