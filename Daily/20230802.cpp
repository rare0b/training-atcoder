#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_k

int binary_search(int n, vector<int> a, int x) {
    int ok = n - 1, ng = -1;
    while (ok - ng > 1) {
        int m = (ok + ng) / 2;
        if (x < a[m]) ok = m;
        if (x == a[m]) return m;
        if (x > a[m]) ng = m;
    }
    return ok;
}

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    cout << binary_search(n, a, x) + 1 << endl;
}
