#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/abc160/tasks/abc160_c

int main() {
    int K, N;
    cin >> K >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];
    sort(A.begin(), A.end());

    // iとi+1の頂点の距離
    vector<int> dist(N);
    for (int i = 0; i < N; i++) {
        if (i == N - 1)
            dist[i] = K - A[i] + A[0];
        else
            dist[i] = A[i + 1] - A[i];
    }
    int x = *max_element(dist.begin(), dist.end());
    cout << K - x << '\n';
}
