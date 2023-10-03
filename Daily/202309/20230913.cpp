#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/abc042/tasks/abc042_b

int main() {
    int n, l;
    cin >> n >> l;
    vector<string> ss(n);
    for (int i = 0; i < n; i++) cin >> ss[i];
    sort(ss.begin(), ss.end());

    for (int i = 0; i < n; i++) cout << ss[i];
    cout << endl;
}
