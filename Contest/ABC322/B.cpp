#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    int n, m;
    string s, t;
    cin >> n >> m >> s >> t;
    bool prev = false, post = false;
    if (s == t.substr(0, n)) prev = true;
    if (s == t.substr(m - n, n)) post = true;

    if (prev && post)
        cout << 0 << endl;
    else if (prev)
        cout << 1 << endl;
    else if (post)
        cout << 2 << endl;
    else
        cout << 3 << endl;
}
