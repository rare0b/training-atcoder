#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    int n;
    cin >> n;
    int len = to_string(n).length();
    // cout << len << endl;
    int tranc = pow(10, len - 3);
    // cout << tranc << endl;
    if (n < 1000)
        cout << n << endl;
    else
        cout << n / tranc * tranc << endl;
}
