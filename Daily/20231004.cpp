#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/tessoku-book/tasks/math_and_algorithm_al

int main() {
    int t, n;
    cin >> t >> n;
    vector<int> br(t + 1);
    for (int i = 0; i < n; i++) {
        int l, r;
        cin >> l >> r;
        br[l]++;
        br[r]--;
    }

    vector<int> cum(t);
    cum[0] = br[0];
    cout << cum[0] << endl;
    for (int i = 1; i < t; i++) {
        cum[i] = cum[i - 1] + br[i];
        cout << cum[i] << endl;
    }
}
