#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    for (int i = 0; i < n; i++) cin >> s[i];

    vector<string> tak1 = {"###.", "###.", "###.", "...."};
    vector<string> tak2 = {"....", ".###", ".###", ".###"};

    for (int i = 0; i < n - 8; i++) {
        for (int j = 0; j < m - 8; j++) {
            bool flag = true;
            for (int ti = 0; ti < 4; ti++) {
                for (int tj = 0; tj < 4; tj++) {
                    if (s[i + ti][j + tj] != tak1[ti][tj]) {
                        flag = false;
                    }
                    // cout << s[i + ti][j + tj] << " ";
                }
                // cout << endl;
            }
            for (int ti = 5; ti < 9; ti++) {
                for (int tj = 5; tj < 9; tj++) {
                    if (s[i + ti][j + tj] != tak2[ti - 5][tj - 5]) {
                        flag = false;
                    }
                    // cout << s[i + ti][j + tj] << " ";
                }
                // cout << endl;
            }
            if (flag) {
                cout << i + 1 << " " << j + 1 << endl;
            }
        }
    }
}
