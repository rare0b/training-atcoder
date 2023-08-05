#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_ck

int main() {
    double n;
    cin >> n;
    double ng = 0, ok = 100000;
    while (ok - ng > 0.001) {
        double mid = (ng + ok) / 2;
        double x = pow(mid, 3) + mid;

        if (x >= n) {
            ok = mid;
        } else {
            ng = mid;
        }
    }

    cout << ok << endl;
}
