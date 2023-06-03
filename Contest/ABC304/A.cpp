#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    int n;
    cin >> n;
    vector<pair<string, ll>> v(n);
    ll min_age = 1e9;
    int min_ind = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
        if (min_age > v[i].second) {
            min_age = v[i].second;
            min_ind = i;
        }
    }
    for (int i = min_ind; i < n + min_ind; i++) {
        cout << v[i % n].first << endl;
    }
}
