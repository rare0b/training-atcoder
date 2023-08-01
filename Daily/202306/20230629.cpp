#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/abc152/tasks/abc152_c

int main() {
    int n;
    cin >> n;
    int M;
    cin >> M;
    int ans = 1;
    for (int i = 1; i < n; i++) {
        int p;
        cin >> p;
        if (p <= M) ans++;
        M = min(M, p);
    }
    cout << ans << endl;
}
