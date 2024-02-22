#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    map<ll, ll> mp;
    ll xq = -1;

    ll q;
    cin >> q;
    for (ll i = 0; i < q; i++)
    {
        ll query;
        cin >> query;
        if (query == 1)
        {
            cin >> xq;
            mp.clear();
        }
        else if (query == 2)
        {
            ll iq, x;
            cin >> iq >> x;
            iq--;
            mp[iq] += x;
        }
        else if (query == 3)
        {
            ll iq;
            cin >> iq;
            iq--;
            if (xq == -1)
            {
                cout << a[iq] + mp[iq] << endl;
            }
            else
            {
                cout << xq + mp[iq] << endl;
            }
        }
    }
}
