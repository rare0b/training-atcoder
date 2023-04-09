#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    for (int i = 0; i < h; i++) cin >> s[i];
    for (int i = 0; i < h; i++) {
        bool t_flag = false;
        for (int j = 0; j < w; j++) {
            if (t_flag) {
                t_flag = false;
                if (s[i][j] == 'T') s[i][j - 1] = 'P', s[i][j] = 'C';
            } else if (s[i][j] == 'T') {
                t_flag = true;
            }
        }
    }

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cout << s[i][j];
        }
        cout << endl;
    }
}