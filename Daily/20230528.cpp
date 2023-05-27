#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/abc092/tasks/abc092_b

int main() {
    int n, d, x;
    cin >> n >> d >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    int cnt = n;
    for (int i = 0; i < n; i++) {
        int j = 1;
        while (true) {
            if (j * a[i] + 1 > d) break;
            cnt++;
            j++;
        }
    }

    cout << cnt + x << endl;
}
