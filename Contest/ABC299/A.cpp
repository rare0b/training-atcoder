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

    string c = "";
    for (int i = 0; i < n; i++) {
        if (s[i] == '|' || s[i] == '*') c += s[i];
    }

    if (c == "|*|")
        cout << "in" << endl;
    else
        cout << "out" << endl;
}