#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    int a, b;
    cin >> a >> b;
    if (a + 1 == b && (a - 1) / 3 == (b - 1) / 3) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
