#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// https://atcoder.jp/contests/abc190/tasks/abc190_c

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(m), b(m);
    for (int i = 0; i < m; i++) cin >> a[i] >> b[i];

    int k;
    cin >> k;
    vector<int> c(k), d(k);
    for (int i = 0; i < k; i++) cin >> c[i] >> d[i];

    int ans = 0;
    for (int bit = 0; bit < (1 << k); bit++) {
        vector<bool> ball(n);
        for (int i = 0; i < k; i++) {
            ball[bit & 1 << i ? c[i] : d[i]] = 1;
        }
        int cnt = 0;
        for (int i = 0; i < m; i++)
            if (ball[a[i]] && ball[b[i]]) cnt++;
        if (ans < cnt) ans = cnt;
    }

    cout << ans << endl;
}