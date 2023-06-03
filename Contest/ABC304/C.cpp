#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

double get_distance(int xi, int yi, int xj, int yj) {
    double res = sqrt(((double)xi - (double)xj) * ((double)xi - (double)xj) +
                      ((double)yi - (double)yj) * ((double)yi - (double)yj));
    return res;
}

int main() {
    int n, d;
    cin >> n >> d;
    vector<int> x(n), y(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    // vector<bool> infected(n, false);
    // infected[0] = true;
    // for (int i = 0; i < n; i++) {
    //     if (!infected[i]) continue;
    //     for (int j = 0; j < n; j++) {
    //         if (infected[j]) continue;
    //         if (get_distance(x[i], y[i], x[j], y[j]) <= d) {
    //             // cout << i << " " << j << " "
    //             //      << get_distance(x[i], y[i], x[j], y[j]) << endl;
    //             infected[j] = true;
    //         }
    //     }
    // }

    dsu ds(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (get_distance(x[i], y[i], x[j], y[j]) <= d) {
                ds.merge(i, j);
            }
        }
    }

    for (int i = 0; i < n; i++) {
        if (ds.same(0, i))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}
