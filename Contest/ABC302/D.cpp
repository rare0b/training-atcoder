#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    ll N, M, D;
    cin >> N >> M >> D;
    vector<ll> A(N), B(M);
    for (ll i = 0; i < N; i++) {
        cin >> A[i];
    }
    for (ll i = 0; i < M; i++) {
        cin >> B[i];
    }
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    ll ans = -1;
    ll i = N - 1, j = M - 1;
    while (i >= 0 && j >= 0) {
        if (abs(A[i] - B[j]) <= D) {
            ans = A[i] + B[j];
            break;
        }

        if (A[i] > B[j]) {
            i--;
        } else {
            j--;
        }
    }

    cout << ans << endl;
}
