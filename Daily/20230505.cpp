#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/abc121/tasks/abc121_b

int main() {
    int N, M, C;
    cin >> N >> M >> C;
    vector<int> B(M);
    for (int i = 0; i < M; i++) cin >> B[i];

    int cnt = 0;

    for (int i = 0; i < N; i++) {
        int val = 0;
        for (int j = 0; j < M; j++) {
            int x;
            cin >> x;
            val += x * B[j];
        }
        val += C;
        if (val > 0) cnt++;
    }

    cout << cnt << endl;
}
