#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

using mint = modint1000000007;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    mint ma = a, mb = b, mc = c;
    mint x = ma * mb * mc;
    cout << x.val() << endl;
}
