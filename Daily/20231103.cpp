#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    int n;
    cin >> n;
    vector<int> x(n), y(n);
    vector<vector<int>> d(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
        d[x[i] - 1][y[i] - 1]++;
    }
}
