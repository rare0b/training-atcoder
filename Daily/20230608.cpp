#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/abc084/tasks/abc084_b

int main() {
    int a, b;
    cin >> a >> b;
    string s;
    cin >> s;
    bool flag = true;
    for (int i = 0; i < a; i++) {
        if (!(s[i] >= '0' && s[i] <= '9')) flag = false;
    }
    if (s[a] != '-') flag = false;
    for (int i = a + 1; i < a + b + 1; i++) {
        if (!(s[i] >= '0' && s[i] <= '9')) flag = false;
    }

    if (flag)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
