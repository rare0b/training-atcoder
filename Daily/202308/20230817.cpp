#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_o

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    auto sorted_a = a;
    sort(sorted_a.begin(), sorted_a.end());

    map<int, int> mp;
    int index = 1;
    for (int i = 0; i < n; i++) {
        if (mp.find(sorted_a[i]) == mp.end()) mp[sorted_a[i]] = index++;
    }

    for (int i = 0; i < n; i++) {
        cout << mp[a[i]] << " \n"[i == n - 1];
    }
}
