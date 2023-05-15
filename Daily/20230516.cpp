#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/abc127/tasks/abc127_d

void push_pair(priority_queue<ll> &q, vector<pair<ll, int>> cb, int N, int M) {
    while (true) {
        int cnt = 0;
        for (int i = 0; i < M; i++) {
            for (int j = 0; j < cb[i].second; j++) {
                q.push(cb[i].first);
                cnt++;

                if (cnt >= N) return;
            }
        }
        return;
    }
}

int main() {
    int N, M;
    cin >> N >> M;
    priority_queue<ll> q;
    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;
        q.push(a);
    }

    vector<pair<ll, int>> cb(M);
    for (int i = 0; i < M; i++) {
        cin >> cb[i].second >> cb[i].first;
    }

    // for (auto x : cb) {
    //     cout << x.first << " " << x.second << endl;
    // }

    sort(cb.begin(), cb.end(), greater<pair<ll, int>>());
    push_pair(q, cb, N, M);

    ll ans = 0;
    for (int i = 0; i < N; i++) {
        ans += q.top();
        q.pop();
    }
    cout << ans << endl;
}
