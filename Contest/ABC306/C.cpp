#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> p;
    map<int, int> mp;
    for (int i = 0; i < 3 * n; i++) {
        int a;
        cin >> a;
        mp[a]++;
        if (mp[a] == 2) {
            p.push_back({i, a});
        }
    }

    sort(p.begin(), p.end());
    for (int i = 0; i < n; i++) {
        cout << p[i].second << " \n"[i == n - 1];
    }
}
