#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/abc157/tasks/abc157_b

int main() {
    int A[3][3];
    vector<vector<bool>> hole(3, vector<bool>(3, false));
    int N;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> A[i][j];
        }
    }
    cin >> N;
    for (int i = 0; i < N; i++) {
        int b;
        cin >> b;
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                if (b == A[j][k]) hole[j][k] = true;
            }
        }
    }

    bool flag = false;
    // よこ
    for (int i = 0; i < 3; i++) {
        // i行目
        if (hole[i][0] && hole[i][1] && hole[i][2]) flag = true;
    }

    // たて
    for (int i = 0; i < 3; i++) {
        // i行目
        if (hole[0][i] && hole[1][i] && hole[2][i]) flag = true;
    }

    // ななめ
    if (hole[0][0] && hole[1][1] && hole[2][2]) flag = true;
    if (hole[0][2] && hole[1][1] && hole[2][0]) flag = true;

    if (flag)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    // for (auto a : hole) {
    //     for (auto x : a) {
    //         if (x)
    //             cout << "x";
    //         else
    //             cout << "o";
    //     }
    //     cout << endl;
    // }
}
