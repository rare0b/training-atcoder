#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    int n;
    cin >> n;
    int l = 1, r = n;
    while (true) {
        int i = (l + r) / 2;  // (r-l)/2+l = (r-l+2l)/2 = (r+l)/2
        cout << "? " << i << endl;
        int j;
        cin >> j;
        // cout << j << endl;
        if (j)
            r = i;
        else
            l = i;
        if (l + 1 == r) {
            // cout << l << " " << r << endl;
            cout << "! " << l << endl;
            return 0;
        }
    }
}