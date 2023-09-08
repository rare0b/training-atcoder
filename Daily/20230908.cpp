#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/abc058/tasks/abc058_b

int main() {
    string o, e;
    cin >> o >> e;
    for (int i = 0; i < o.size(); ++i) {
        cout << o[i];
        if (i < e.size()) cout << e[i];
    }
    cout << endl;
}
