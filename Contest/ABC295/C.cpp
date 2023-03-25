#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    int n;
    cin >> n;
    set<int> a;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        auto itr = a.find(x);
        if (itr != a.end()) {
            a.erase(x);
            ans++;
        } else {
            a.insert(x);
        }
    }

    cout << ans << endl;
}