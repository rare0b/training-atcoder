#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/abc130/tasks/abc130_d

int main() {
    // 参考:https://qiita.com/drken/items/ecd1a472d3a0e7db8dce
    ll N, K;
    cin >> N >> K;
    vector<ll> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];

    ll right = 0;
    ll sum = 0;
    ll ans = 0;
    for (ll left = 0; left < N; left++) {
        while (right < N && sum < K) {
            sum += A[right];
            right++;
        }
        if (sum >= K) ans += N - right + 1;
        if (right == left) right++;
        sum -= A[left];
    }

    cout << ans << endl;
    return 0;
}
