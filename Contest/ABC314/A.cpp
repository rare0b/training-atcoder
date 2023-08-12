#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    string pi =
        "1415926535897932384626433832795028841971693993751058209749445923078164"
        "062862089986280348253421170679";
    int n;
    cin >> n;
    string ans = "3.";
    for (int i = 0; i < n; i++) {
        ans += pi[i];
    }

    cout << ans << endl;
}
