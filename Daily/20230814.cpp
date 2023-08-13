#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_n

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(n), c(n), d(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    for (int i = 0; i < n; i++) cin >> c[i];
    for (int i = 0; i < n; i++) cin >> d[i];

    vector<int> p(n * n), q(n * n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) p[i * n + j] = a[i] + b[j];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) q[i * n + j] = c[i] + d[j];
    sort(q.begin(), q.end());

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            bool ok = binary_search(q.begin(), q.end(), k - p[i * n + j]);
            if (ok) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;
}
