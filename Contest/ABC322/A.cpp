#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    int n;
    string s;
    cin >> n >> s;
    bool flag = false;
    int ans = -1;
    for (int i = 0; i < n - 2; i++) {
        if (s[i] == 'A' && s[i + 1] == 'B' && s[i + 2] == 'C') {
            ans = i + 1;
            break;
        }
    }
    cout << ans << endl;
}
