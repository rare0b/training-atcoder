#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];

    cout << A[0] << " \n"[N == 1];
    for (int i = 1; i < N; i++) {
        if (A[i - 1] + 1 == A[i] || A[i - 1] - 1 == A[i]) {
            cout << A[i] << " \n"[i == N - 1];
        } else if (A[i - 1] < A[i]) {
            for (int j = A[i - 1] + 1; j < A[i]; j++) {
                cout << j << " ";
            }
            cout << A[i] << " \n"[i == N - 1];
        } else {
            for (int j = A[i - 1] - 1; j > A[i]; j--) {
                cout << j << " ";
            }
            cout << A[i] << " \n"[i == N - 1];
        }
    }
}
