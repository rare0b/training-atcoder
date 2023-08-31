#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/abc158/tasks/abc158_c

int main() {
    int a, b;
    cin >> a >> b;
    for (int i = 0; i < 10000; i++) {
        int ai = i * 8 / 100;
        int bi = i * 10 / 100;
        if (ai == a && bi == b) {
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
}
