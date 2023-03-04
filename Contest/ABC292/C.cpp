#include <bits/stdc++.h>
using namespace std;
using ll = long long;

//

ll prime_count(int n) {
    int count = 1;
    for (ll p = 2; p * p <= n; p++) {
        if (n % p != 0) {
            continue;
        }

        int e = 0;
        while (n % p == 0) {
            e++;
            n /= p;
        }
        count *= e + 1;
    }

    if (n != 1) {
        count *= 2;
    }

    return count;
}

int main() {
    int n;
    cin >> n;
    ll ans = 0;
    for (int i = 1; i < n; i++) {
        int a = i;
        int b = n - i;

        ll c = prime_count(a);
        ll d = prime_count(b);
        ans += c * d;
    }

    cout << ans << endl;
}