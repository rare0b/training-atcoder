#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// https://atcoder.jp/contests/abc174/tasks/abc174_d

int main() {
    int n;
    cin >> n;
    vector<char> c(n);
    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }

    int ans = 0;
    int j = n - 1;
    for (int i = 0; i < n - 1; i++) {
        if (c[i] == 'W') {
            for (; j > i; j--) {
                if (c[j] == 'R') {
                    ans++;
                    j--;
                    break;
                }
            }
        }
    }

    cout << ans << endl;
}