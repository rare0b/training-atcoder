#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/abc155/tasks/abc155_c

int main() {
    int n;
    cin >> n;
    map<string, int> mp;
    int max_cnt = 0;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        mp[s]++;
        max_cnt = max(max_cnt, mp[s]);
    }

    for (auto itr = mp.begin(); itr != mp.end(); itr++) {
        if (itr->second == max_cnt) {
            cout << itr->first << endl;
        }
    }
}
