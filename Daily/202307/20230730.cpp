#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];

    int l = 0, r = 1e9 + 1;
    while (r - l > 1) {
        int x = (l + r) / 2;
        int sell = 0, buy = 0;
        for (int i = 0; i < n; i++)
            if (a[i] <= x) sell++;
        for (int i = 0; i < m; i++)
            if (b[i] >= x) buy++;
        if (sell >= buy)
            r = x;
        else
            l = x;
    }

    cout << r << endl;
}
