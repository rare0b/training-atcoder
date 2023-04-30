#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/agc016/submissions/40772995

int main() {
    string s;
    cin >> s;
    if (s.size() == 1) {
        cout << 0 << endl;
        return 0;
    }
    for (int i = 0; i < s.size() - 1; i++) {
        if (s[i] != s[i + 1]) break;
        if (i == s.size() - 2) {
            cout << 0 << endl;
            return 0;
        }
    }
    int ans = 1e9;
    for (int i = 0; i < 26; i++) {
        string t = s;
        char c = i + 'a';
        int cnt = 0;
        if (t.find(c) == string::npos) continue;
        while (true) {
            string tmp = t;
            t.erase(t.size() - 1);
            cnt++;
            bool flag = true;
            for (int i = 0; i < t.size(); i++) {
                if (tmp[i + 1] == c) t[i] = tmp[i + 1];
                if (t[i] != c) flag = false;
            }
            if (flag) break;
        }
        ans = min(ans, cnt);
    }
    cout << ans << endl;
}
