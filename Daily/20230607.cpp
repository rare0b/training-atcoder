#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/abc052/tasks/abc052_b

int main() {
    int x = 0;
    int n;
    cin >> n;
    string s;
    cin >> s;
    int M = 0;
    for (auto c : s) {
        if (c == 'I')
            x++;
        else
            x--;
        M = max(M, x);
    }
    cout << M << endl;
}
