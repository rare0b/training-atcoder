#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/abc139/tasks/abc139_b

int main() {
    int a, b;
    cin >> a >> b;
    int ans = (b - 1 + a - 2) / (a - 1);
    cout << ans << endl;
}