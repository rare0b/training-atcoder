#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/abc149/tasks/abc149_c

int main() {
    int x;
    cin >> x;
    if (x <= 2) {
        cout << 2 << endl;
        return 0;
    } else if (x <= 3) {
        cout << 3 << endl;
        return 0;
    }
    for (int i = x; i <= 10000000; i++) {
        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) break;
            if (j == floor(sqrt(i))) {
                cout << i << endl;
                return 0;
            }
        }
    }
}
