#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

ll cnt = 0;

long long gcd(long long a, long long b) {
    if (b == 0) {
        return a;
    } else {
        cnt += a / b;
        return gcd(b, a % b);
    }
}

int main() {
    ll a, b;
    cin >> a >> b;
    gcd(a, b);
    cout << cnt - 1 << endl;
}