#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    int n, k, q;
    cin >> n >> k >> q;
    vector<int> a(n, 0);
    multiset<int, greater<int>> b;
    for (int i = 0; i < n; i++) {
        b.insert(0);
    }
    // for (int i = 0; i < n; i++) {
    //     auto itr = a.begin();
    //     advance(itr, i);
    //     cout << *itr << endl;
    // }

    int ans = 0;
    for (int i = 0; i < q; i++) {
        int x, y;
        cin >> x >> y;
        int tmp = a[x - 1];
        a[x - 1] = y;

        auto itr_begin = b.begin();
        auto itr = b.find(tmp);
        multiset<int, greater<int>> itr_k = advance(itr_begin, k);
        if (distance(itr_begin, itr) <= k) {
            ans -= tmp;
            itr++;
            if (y >= *itr)
                ans += y;
            else
                ans += *itr;
            itr--;
        } else if () {
            cout << ans << endl;
            itr = b.erase(itr);
            b.insert(y);
        }
    }
