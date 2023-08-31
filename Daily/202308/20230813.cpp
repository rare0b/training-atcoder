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

    vector<int> updated(n, -1);
    int all_upper = -2;
    int all_lower = -2;
    for (int i = 0; i < q; i++) {
        int t, x;
        char c;
        cin >> t >> x >> c;
        x--;
        if (t == 1) {
            s[x] = c;
            updated[x] = i;
        } else if (t == 2) {
            all_lower = i;
        } else if (t == 3) {
            all_upper = i;
        }
    }

    for (int i = 0; i < n; i++) {
        if (all_lower > all_upper && all_lower > updated[i]) {
            cout << static_cast<char>(tolower(s[i]));
        } else if (all_upper > all_lower && all_upper > updated[i]) {
            cout << static_cast<char>(toupper(s[i]));
        } else {
            cout << s[i];
        }
    }
    cout << endl;

    // cout << all_lower << " " << all_upper << endl;
    // for (int i = 0; i < n; i++) {
    //     cout << updated[i] << " ";
    // }
    // cout << endl;
}
