#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    int n, q;
    string s;
    cin >> n >> s >> q;

    vector<bool> upper_flag(n, false);
    bool reversal = false;
    for (int i = 0; i < n; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            upper_flag[i] = true;
        }
    }

    vector<bool> all_upper(n, true);
    vector<bool> all_lower(n, false);
    for (int i = 0; i < q; i++) {
        int t, x;
        char c;
        cin >> t >> x >> c;
        x--;
        if (t == 1) {
            s[x] = c;
            if (s[x] >= 'A' && s[x] <= 'Z') {
                upper_flag[x] = true;
            } else {
                upper_flag[x] = false;
            }
        } else if (t == 2) {
            upper_flag = all_lower;
        } else if (t == 3) {
            upper_flag = all_upper;
        }
    }

    for (int i = 0; i < n; i++) {
        if (upper_flag[i]) {
            cout << s[i] << uppercase;
        } else {
            locale l = locale::classic();
            cout << tolower(s[i], l);
        }
    }
    cout << endl;
}
