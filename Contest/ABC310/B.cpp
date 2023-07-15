#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<bool>> func_flag(n, vector<bool>(m, false));
    vector<int> price(n);
    for (int i = 0; i < n; i++) {
        cin >> price[i];
        int c;
        cin >> c;
        for (int j = 0; j < c; j++) {
            int f;
            cin >> f;
            f--;
            func_flag[i][f] = true;
        }
    }
    // for (auto x : price) cout << x << " ";
    // cout << endl;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) continue;

            bool flag = true;
            bool flag_func = false;
            bool flag_price = false;
            for (int fn = 0; fn < m; fn++) {
                if (!func_flag[i][fn] && func_flag[j][fn]) {
                    flag = false;
                    break;
                }
                if (func_flag[i][fn] && !func_flag[j][fn]) {
                    flag_func = true;
                }
            }
            if (price[i] < price[j]) flag_price = true;
            if (price[i] > price[j]) flag = false;

            // cout << i << " " << j << ": " << flag << " " << flag_func << " "
            //      << flag_price << endl;

            if (flag && (flag_func || flag_price)) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
}
