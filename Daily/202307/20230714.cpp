#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/abc044/tasks/abc044_b

int main() {
    string w;
    cin >> w;
    vector<int> cnt(26, 0);
    for (int i = 0; i < w.size(); i++) {
        cnt[w[i] - 'a']++;
    }

    bool flag = true;
    for (int i = 0; i < 26; i++) {
        if (cnt[i] % 2 == 1) {
            flag = false;
        }
    }

    if (flag) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
