#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    ll a, b;
    cin >> a >> b;
    ll sum = 0;
    ll tmp = 1;
    for (ll i = 0; i < a; i++) tmp *= b;
    sum += tmp;
    tmp = 1;
    for (ll i = 0; i < b; i++) tmp *= a;
    sum += tmp;
    cout << sum << endl;
}
