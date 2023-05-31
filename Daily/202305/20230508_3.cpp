#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/abc086/tasks/abc086_b

int main() {
    string a, b;
    cin >> a >> b;
    string c = a + b;
    int n = stoi(c);
    int m = sqrt(n);
    if (m * m == n)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
