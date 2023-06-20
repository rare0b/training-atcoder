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
    for (int i = 0; i < q; i++) {
        int x;
        cin >> x;
        a[x - 1]++;
    }
    for (int i = 0; i < n; i++) {
        if (k - q + a[i] > 0) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
}
