#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://github.com/rare0b/100-days-of-code/blob/master/intl/ja/log.md

int main() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int x3 = x2 - (y2 - y1), y3 = y2 + (x2 - x1);
    int x4 = x1 - (y2 - y1), y4 = y1 + (x2 - x1);
    cout << x3 << " " << y3 << " " << x4 << " " << y4 << endl;
}
