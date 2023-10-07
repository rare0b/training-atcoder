#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(m);
    for (int i = 0; i < m; i++) cin >> a[i];
    vector<string> ss(n);
    for (int i = 0; i < n; i++) cin >> ss[i];

    vector<int> score(n);
    int max_score = 0;
    vector<priority_queue<int>> pq(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (ss[i][j] == 'o') {
                score[i] += a[j];
            } else if (ss[i][j] == 'x') {
                pq[i].push(a[j]);
            }
        }
        score[i] += i + 1;
        max_score = max(max_score, score[i]);
    }

    for (int i = 0; i < n; i++) {
        int ans = 0;
        while (score[i] < max_score) {
            score[i] += pq[i].top();
            pq[i].pop();
            ans++;
        }
        cout << ans << endl;
    }
}
