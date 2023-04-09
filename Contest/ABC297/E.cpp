#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    ll n, k;
    cin >> n >> k;
    k++;
    vector<ll> a(n);
    set<ll> st;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        st.insert(a[i]);
    }

    vector<ll> ans(k, 0);
    for (int i = 1; i < k; i++) {
        ll v = *st.begin();
        st.erase(st.begin());
        for (int j = 0; j < n; j++) {
            st.insert(v + a[j]);
        }

        if (v == ans[i - 1]) {
            i--;
            continue;
        } else {
            ans[i] = v;
        }
    }

    cout << ans[k - 1] << endl;
}