#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_cm

vector<ll> enumerate(vector<ll> a) {
    vector<ll> sum_list;
    for (ll i = 0; i < (1 << a.size()); i++) {
        ll sum = 0;
        for (ll j = 0; j < a.size(); j++) {
            ll wari = (1 << j);
            if ((i / wari) % 2 == 1) sum += a[j];
        }
        sum_list.push_back(sum);
    }
    return sum_list;
}

int main() {
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) cin >> a[i];

    vector<ll> l1, l2;
    for (ll i = 0; i < n / 2; i++) l1.push_back(a[i]);
    for (ll i = n / 2; i < n; i++) l2.push_back(a[i]);

    vector<ll> sum1 = enumerate(l1);
    vector<ll> sum2 = enumerate(l2);
    sort(sum2.begin(), sum2.end());

    if (binary_search(sum1.begin(), sum1.end(), k) ||
        binary_search(sum2.begin(), sum2.end(), k)) {
        cout << "Yes" << endl;
        return 0;
    }

    for (ll i = 0; i < sum1.size(); i++) {
        if (binary_search(sum2.begin(), sum2.end(), k - sum1[i])) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}
