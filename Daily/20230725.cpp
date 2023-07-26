#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/abc311/editorial/6822

int main() {
    int n, m;
    cin >> n >> m;
    vector<string> ss(n);
    for (auto &s : ss) cin >> s;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (ss[i][j] == '#') {
                if (i != n - 1) ss[i + 1][j] = '#';
                if (i != n - 1 && j != m - 1) ss[i + 1][j + 1] = '#';
            }
        }
    }

    vector<ll> dp(m + 1, 0);
}
