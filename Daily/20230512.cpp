#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/agc027/tasks/agc027_a

int main() {
    int N;
    cin >> N;
    int x;
    cin >> x;
    vector<int> a(N);
    int sum = 0;
    for (int i = 0; i < N; i++) {
        cin >> a[i];
        sum += a[i];
    }
    if (sum == x) {
        cout << N << endl;
        return 0;
    } else if (sum < x) {
        cout << N - 1 << endl;
        return 0;
    }

    sort(a.begin(), a.end());
    int ans = 0;

    for (int i = 0; i < N; i++) {
        if (x - a[i] >= 0) {
            x -= a[i];
            ans++;
        } else {
            break;
        }
    }

    cout << ans << endl;
}
