#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), greater<int>());

    vector<pair<int, int>> pa, pb;
    pa.push_back({0, 0});
    pa.push_back({a[0], 0});
    pb.push_back({b[0] + 1, 0});
    pb.push_back({b[0], 0});
    int prev, ind;
    prev = a[0];
    ind = 1;
    for (auto x : a) {
        if (x == prev) {
            pa[ind].second++;
        } else {
            pa.push_back({x, pa[ind].second + 1});
            prev = x;
            ind++;
        }
    }
    pa.push_back({1e9 + 1, pa[ind].second});
    prev = b[0];
    ind = 1;
    for (auto x : b) {
        if (x == prev) {
            pb[ind].second++;
        } else {
            pb.push_back({x, pb[ind].second + 1});
            prev = x;
            ind++;
        }
    }
    pb.push_back({0, pa[ind].second});
    sort(pb.begin(), pb.end());

    for (auto p : pa) cout << p.first << " " << p.second << endl;
    cout << endl;
    for (auto p : pb) cout << p.first << " " << p.second << endl;
    cout << endl;

    int ai = 0, sa = pa.size();
    int bi = 0, sb = pb.size();
    while (true) {
        if (pa[ai].first < pb[bi].first) {
            ai++;
        }
        cout << pa[ai].first << " " << pa[ai].second << "," << pb[bi].first
             << " " << pb[bi].second << endl;
        if (pa[ai + 1].first >= pb[bi].first &&
            pa[ai].second >= pb[bi].second) {
            cout << max(pa[ai].first, pb[bi].first) << endl;
            return 0;
        }
        if (pa[ai].first == 0 || pa[ai].first >= pb[bi].first) {
            bi++;
        }

        if (ai >= sa - 1 || bi >= sb) {
            return 0;
        }
    }
}
