#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;
using mint = modint998244353;

// https://atcoder.jp/contests/abc298/tasks/abc298_d

int main() {
    int Q;
    cin >> Q;
    deque<int> S(1, 1);
    mint ans = 1;

    for (int i = 0; i < Q; i++) {
        int q;
        cin >> q;
        if (q == 1) {
            int x;
            cin >> x;
            S.push_back(x);
            ans = ans * 10 + x;
        } else if (q == 2) {
            int s = S.front();
            S.pop_front();
            ans -= mint(10).pow(S.size()) * s;
        } else if (q == 3) {
            cout << ans.val() << endl;
        }
    }
}
