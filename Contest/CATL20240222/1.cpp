#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main()
{
    int h1, w1, h2, w2;
    cin >> h1 >> w1 >> h2 >> w2;
    if (h1 == h2 || h1 == w2 || w1 == h2 || w1 == w2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
