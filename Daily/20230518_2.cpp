#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/abc054/tasks/abc054_b

int main() {
    int N, M;
    cin >> N >> M;
    vector<string> A(N);
    vector<string> B(M);
    for (int i = 0; i < N; i++) cin >> A[i];
    for (int i = 0; i < M; i++) cin >> B[i];

    for (int i = 0; i < N - M + 1; i++) {
        for (int j = 0; j < N - M + 1; j++) {
            bool flag = true;
            for (int k = i; k < i + M; k++) {
                // cout << A[k].substr(j, M) << endl;
                // cout << B[k - i] << endl;
                if (A[k].substr(j, M) != B[k - i]) flag = false;
            }
            // if (flag) {
            //     cout << "Yes" << endl;
            //     return 0;
            // }
        }
    }
    cout << "No" << endl;
    return 0;
}
