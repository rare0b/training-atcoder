#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/abc127/tasks/abc127_c

int main() {
    int n, m;
    cin >> n >> m;
    int mini = 1, maxi = n;
    for (int i = 0; i < m; i++) {
        int l, r;
        cin >> l >> r;
        mini = max(l, mini);
        maxi = min(r, maxi);
    }
    if (mini <= maxi) {
        cout << maxi - mini + 1 << endl;
    } else {
        cout << 0 << endl;
    }
}
