#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/practice2/tasks/practice2_i

int main() {
    string s;
    cin >> s;
    vector<int> sa = suffix_array(s);
    // for (auto x : sa) {
    //     cout << x << " ";
    // }
    // cout << endl;
    long long ans = s.size() * (s.size() + 1) / 2;
    // for (auto x : lcp_array(s, sa)) {
    //     ans -= x;
    //     cout << x << " ";
    // }
    // cout << endl;
    cout << ans << endl;
}
