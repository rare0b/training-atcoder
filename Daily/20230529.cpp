#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/hitachi2020/tasks/hitachi2020_b

int main() {
    int A, B, M;
    cin >> A >> B >> M;
    vector<int> a(A), b(B);
    for (int i = 0; i < A; i++) cin >> a[i];
    for (int i = 0; i < B; i++) cin >> b[i];
    int ans =
        *min_element(a.begin(), a.end()) + *min_element(b.begin(), b.end());
    for (int i = 0; i < M; i++) {
        int x, y, c;
        cin >> x >> y >> c;
        x--, y--;
        if (ans > a[x] + b[y] - c) ans = a[x] + b[y] - c;
    }

    cout << ans << endl;
}
