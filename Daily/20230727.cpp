#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/abc109/tasks/abc109_b

int main() {
    int n;
    cin >> n;
    string w;
    cin >> w;
    map<string, bool> mp;
    char head = w[w.size() - 1];
    mp.insert({w, true});
    for (int i = 1; i < n; i++) {
        cin >> w;
        if (w[0] != head || mp.count(w)) {
            cout << "No" << endl;
            return 0;
        }
        head = w[w.size() - 1];
        mp.insert({w, true});
    }
    cout << "Yes" << endl;
}
