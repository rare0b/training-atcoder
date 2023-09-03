#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    int n;
    cin >> n;
    vector<vector<bool>> plane(100, vector<bool>(100));
    for (int i = 0; i < n; i++) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        for (int y = c; y < d; y++) {
            for (int x = a; x < b; x++) {
                plane[y][x] = true;
            }
        }
    }

    int ans = 0;
    for (int y = 0; y < 100; y++) {
        for (int x = 0; x < 100; x++) {
            if (plane[y][x]) ans++;
        }
    }

    cout << ans << endl;
}
