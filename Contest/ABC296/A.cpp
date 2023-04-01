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
    char c = s[0];
    for (int i = 1; i < n; i++) {
        if (c == s[i]) {
            cout << "No" << endl;
            return 0;
        }
        c = s[i];
    }
    cout << "Yes" << endl;
}