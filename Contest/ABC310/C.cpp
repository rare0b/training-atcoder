#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    int n;
    cin >> n;
    map<string, bool> mp;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        string rs = s;
        reverse(rs.begin(), rs.end());

        if (mp.find(s) == mp.end() && mp.find(rs) == mp.end()) {
            mp.insert({s, true});
        }
    }

    cout << mp.size() << endl;
}
