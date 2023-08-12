#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    int n;
    cin >> n;
    vector<int> c(n);
    vector<map<int, int>> vm(n);

    for (int i = 0; i < n; i++) {
        cin >> c[i];
        for (int j = 0; j < c[i]; j++) {
            int a;
            cin >> a;
            vm[i].insert({a, 1});
        }
    }

    int x;
    cin >> x;
    int m = 1e9;
    vector<pair<int, int>> winner;
    for (int i = 0; i < n; i++) {
        if (vm[i].find(x) != vm[i].end()) {
            winner.push_back({i + 1, c[i]});
            m = min(m, c[i]);
        }
    }

    int count = 0;
    vector<int> ans;
    for (int i = 0; i < winner.size(); i++) {
        if (winner[i].second == m) {
            count++;
            ans.push_back(winner[i].first);
        }
    }

    cout << count << endl;
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " \n"[i == ans.size() - 1];
    }
}
