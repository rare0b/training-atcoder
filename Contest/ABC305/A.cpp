#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    int n;
    cin >> n;
    int mi = (n / 5) * 5;
    int ma = (n / 5 + 1) * 5;
    if (abs(n - mi) < abs(n - ma))
        cout << mi << endl;
    else
        cout << ma << endl;
}
