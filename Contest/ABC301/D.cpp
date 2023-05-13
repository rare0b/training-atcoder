#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    string S;
    ll N;
    cin >> S >> N;

    ll sz = S.size();
    ll val = 0;
    ll expo = 1;
    for (ll i = 0; i < sz; i++) expo *= 2LL;
    ll tmp = expo;

    for (ll i = 0; i < sz; i++) {
        expo /= 2LL;
        if (S[i] == '1') val += expo;
    }

    expo = tmp;
    for (ll i = 0; i < sz; i++) {
        expo /= 2LL;
        if (S[i] == '?' && val + expo <= N) val += expo;
    }

    if (val > N)
        cout << -1 << endl;
    else
        cout << val << endl;
}
