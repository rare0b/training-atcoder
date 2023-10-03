#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_ce

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    vector<int> ok(n + 1), ng(n + 1);
    for (int i = 0; i < n; i++) {
        if (a[i]) {
            ok[i + 1]++;
        } else {
            ng[i + 1]++;
        }
        ok[i + 1] += ok[i];
        ng[i + 1] += ng[i];
    }

    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int l, r;
        cin >> l >> r;
        int sub_ok = ok[r] - ok[l - 1], sub_ng = ng[r] - ng[l - 1];
        if (sub_ok > sub_ng) {
            cout << "win" << endl;
        } else if (sub_ok < sub_ng) {
            cout << "lose" << endl;
        } else {
            cout << "draw" << endl;
        }
    }
}
