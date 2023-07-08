#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    int n;
    cin >> n;
    vector<vector<char>> a(n, vector<char>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    auto b = a;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != 0 && i != n - 1 && j != 0 && j != n - 1) continue;
            if (i == 0 && j == 0)
                a[i][j] = b[i + 1][j];
            else if (i == 0)
                a[i][j] = b[i][j - 1];
            else if (j == n - 1)
                a[i][j] = b[i - 1][j];
            else if (i == n - 1)
                a[i][j] = b[i][j + 1];
            else if (j == 0)
                a[i][j] = b[i + 1][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j];
        }
        cout << endl;
    }
}
