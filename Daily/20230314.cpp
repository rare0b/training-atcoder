#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

#define rep(i, m, n) for (int i = m; i < (int)(n); i++)

// https://atcoder.jp/contests/abc156/tasks/abc156_c

int main() {
    int n;
    cin >> n;
    vector<int> x(n);
    int sum = 0;
    rep(i, 0, n) {
        cin >> x[i];
        sum += x[i];
    }
    int avg = sum / n;
    int ans1 = 0;
    int ans2 = 0;
    rep(i, 0, n) {
        ans1 += pow((x[i] - avg), 2);
        ans2 += pow((x[i] - avg - 1), 2);
    }
    cout << min(ans1, ans2) << endl;
}