#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    string s;
    cin >> s;
    map<vector<int>, ll> mp;
    vector<int> cnt(10, 0);
    mp[cnt]++;
    for (auto &nx : s) {
        cnt[nx - '0']++;
        cnt[nx - '0'] %= 2;
        mp[cnt]++;
    }

    ll res = 0;
    for (auto &nx : mp) {
        ll x = nx.second;
        res += (x * (x - 1)) / 2;
    }

    cout << res << endl;
}