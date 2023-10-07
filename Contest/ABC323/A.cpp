#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    string s;
    cin >> s;
    for (int i = 1; i < s.length(); i += 2) {
        if (s[i] != '0') {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}
