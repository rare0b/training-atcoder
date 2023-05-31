#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/jsc2019-qual/tasks/jsc2019_qual_b

using mint = modint1000000007;

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    mint cnt = 0;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (A[i] > A[j]) cnt++;
        }
    }

    cnt *= ((mint(K) - mint(1)) * mint(K)) / 2;

    mint tmp = 0;
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (A[i] > A[j]) tmp++;
        }
    }
    cnt += tmp * mint(K);

    cout << cnt.val() << endl;
}
