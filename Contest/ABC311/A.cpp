#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<bool> flag(3, false);
    for (int i = 0; i < n; i++) {
        if (s[i] == 'A') flag[0] = true;
        if (s[i] == 'B') flag[1] = true;
        if (s[i] == 'C') flag[2] = true;
        if (flag[0] && flag[1] && flag[2]) {
            cout << i + 1 << endl;
            return 0;
        }
    }
}
