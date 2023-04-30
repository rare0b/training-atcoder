#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/practice2/tasks/practice2_a

int main() {
    int n, q;
    cin >> n >> q;
    dsu d(n);
    for (int i = 0; i < q; i++) {
        int x, y, z;
        cin >> x >> y >> z;
        if (x) {
            cout << d.same(y, z) << endl;
        } else {
            d.merge(y, z);
        }
    }
}
