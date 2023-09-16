#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

bool check(string s) {
    for (int i = 0; i < s.length() / 2; i++) {
        if (s[i] != s[s.length() - i - 1]) return false;
    }
    return true;
}

int main() {
    string s;
    cin >> s;
    int ans = 0;
    for (int i = 0; i < s.length(); i++) {
        for (int j = 1; j <= s.length() - i; j++) {
            string tmp = s.substr(i, j);
            int l = tmp.length();
            if (check(tmp)) ans = max(ans, l);
        }
    }

    cout << ans << endl;
}
