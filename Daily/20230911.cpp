#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/abc053/tasks/abc053_b

int main() {
    string s;
    cin >> s;
    int index_A = s.find('A'), index_Z = s.rfind('Z');
    cout << index_Z - index_A + 1 << endl;
}
