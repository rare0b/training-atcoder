#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/abc103/tasks/abc103_b

int main() {
    string s, t;
    cin >> s >> t;
    for (int i = 0; i < s.size(); i++) {
        for (int j = 0; j < s.size(); j++) {
            if (s[(j + i) % s.size()] != t[j]) {
                break;
            }
            if (j == s.size() - 1) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
}
