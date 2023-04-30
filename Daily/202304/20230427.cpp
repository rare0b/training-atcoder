#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/abc195/tasks/abc195_d

int main() {
    // NもMもQも十分小さいので、価値の大きい順に、その荷物が入る最小の箱に入れていけばよさそう
    // 50*50*50

    int N, M, Q;
    cin >> N >> M >> Q;
    vector<pair<int, int>> VW(N);
    vector<int> X(M);
    for (int i = 0; i < N; i++) {
        cin >> VW[i].second >> VW[i].first;
    }
    for (int j = 0; j < M; j++) {
        cin >> X[j];
    }

    sort(VW.rbegin(), VW.rend());

    auto X_pre = X;

    while (Q) {
        int L, R;
        cin >> L >> R;
        int value = 0;
        X = X_pre;
        vector<bool> used(M, false);
        for (int j = L - 1; j < R; j++) {
            used[j] = true;
        }

        vector<pair<int, bool>> ptmp(M);
        for (int j = 0; j < M; j++) {
            ptmp[j].first = X[j];
            ptmp[j].second = used[j];
        }
        sort(ptmp.rbegin(), ptmp.rend());
        for (int j = 0; j < M; j++) {
            X[j] = ptmp[j].first;
            used[j] = ptmp[j].second;
        }

        for (int i = 0; i < N; i++) {
            int tmp = -1;
            for (int j = 0; j < M; j++) {
                if (!used[j] && X[j] >= VW[i].second) {
                    tmp = j;
                }
                if (j == M - 1) {
                    if (tmp == -1) break;

                    used[tmp] = true;
                    value += VW[i].first;
                }
            }
        }
        cout << value << endl;
        Q--;
    }
}