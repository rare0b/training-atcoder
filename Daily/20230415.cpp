#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/abc298/tasks/abc298_a

int main() {
    int n;
    string s;
    cin >> n >> s;
    bool flag = false;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'o') {
            flag = true;
        }
        if (s[i] == 'x') {
            cout << "No" << endl;
            return 0;
        }
    }

    if (flag)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
