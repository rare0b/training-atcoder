#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

void dfs() {
    // do something
}

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> a(n - 1);
    for (int i = 0; i < n - 1; i++) cin >> a[i];

    sort(a.begin(), a.end());

    int sum = 0;
    for (int i = 1; i < n - 2; i++) {
        sum += a[i];
    }

    int ans;
    if (x <= sum + a[0]) {
        ans = 0;
    } else if (x - sum <= a[n - 2]) {
        ans = x - sum;
    } else {
        ans = -1;
    }

    cout << ans << endl;
}
