#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    int n;
    cin >> n;
    vector<string> ss(n);
    for (int i = 0; i < n; i++) cin >> ss[i];

    int M = 0;
    vector<pair<int, int>> win(n);
    for (int i = 0; i < n; i++) {
        win[i].second = -1 * (i + 1);
        for (int j = 0; j < n; j++) {
            if (ss[i][j] == 'o') win[i].first++;
        }
    }
    sort(win.begin(), win.end(), greater<pair<int, int>>());

    for (int i = 0; i < n; i++) {
        cout << -1 * win[i].second << " \n"[i == n - 1];
    }
}
