#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/agc002/tasks/agc002_a

int main() {
    int a, b;
    cin >> a >> b;
    if (a <= 0 && b >= 0) {
        cout << "Zero" << endl;
    } else if (a > 0 || abs(a - b) % 2 == 1) {
        cout << "Positive" << endl;
    } else {
        cout << "Negative" << endl;
    }
}
