#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    vector<int> c(n);
    vector<deque<char>> ms(m);
    for (int i = 0; i < n; i++) {
        cin >> c[i];
        c[i]--;
        ms[c[i]].push_back(s[i]);
    }

    for (int i = 0; i < m; i++) {
        char c = ms[i].back();
        ms[i].pop_back();
        ms[i].push_front(c);
    }

    string ans = "";
    for (int i = 0; i < n; i++) {
        ans += ms[c[i]].front();
        ms[c[i]].pop_front();
    }

    cout << ans << endl;
}
