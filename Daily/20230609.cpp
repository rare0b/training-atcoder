#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/abc071/tasks/abc071_b

int main() {
    string s;
    cin >> s;
    vector<bool> a(26, false);
    for (auto c : s) {
        a[c - 'a'] = true;
    }
    for (int i = 0; i < 26; i++) {
        if (a[i] == false) {
            cout << (char)(i + 'a') << endl;
            return 0;
        }
    }
    cout << "None" << endl;
    return 0;
}
