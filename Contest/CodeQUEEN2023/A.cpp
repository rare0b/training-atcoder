#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    string s;
    char c;
    cin >> s >> c;
    string ans = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == c) ans += s[i];
        ans += s[i];
    }

    cout << ans << endl;
}
