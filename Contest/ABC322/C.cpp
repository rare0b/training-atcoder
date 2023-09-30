#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(m);
    for (int i = 0; i < m; i++) {
        cin >> a[i];
        a[i]--;
    }

    int sub = 0, l = 0, r = 0;
    while (l < n) {
        if (l > a[r]) {
            r++;
        } else if (l == a[r]) {
            for (; sub != -1; sub--) {
                cout << sub << endl;
            }
            l++;
            sub++;
        } else {
            l++;
            sub++;
        }
    }
}
