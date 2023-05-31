#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/abc150/tasks/abc150_c

int main() {
    int n;
    cin >> n;
    vector<int> p(n), q(n), r(n);
    for (int i = 0; i < n; i++) cin >> p[i];
    for (int i = 0; i < n; i++) cin >> q[i];
    for (int i = 0; i < n; i++) r[i] = i + 1;
    // cout << "r: ";
    // for (auto x : r) cout << x;
    // cout << endl;
    int p_pos = -1, q_pos = -1;
    int i = 0;
    do {
        if (p == r) p_pos = i;
        if (q == r) q_pos = i;
        i++;
    } while (next_permutation(r.begin(), r.end()));

    cout << abs(q_pos - p_pos) << endl;
}
