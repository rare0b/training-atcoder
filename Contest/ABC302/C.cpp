#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    int N, M;
    cin >> N >> M;
    vector<string> S(N);
    for (int i = 0; i < N; i++) {
        cin >> S[i];
    }
    sort(S.begin(), S.end());

    // for (auto x : S) cout << x << ' ';
    // cout << '\n';
    // int cnt = 0;
    do {
        // if (cnt == 0) {
        //     for (auto x : S) cout << x << ' ';
        //     cout << '\n';
        //     cnt++;
        // }
        // cnt++;
        // for (auto x : S) cout << x << " ";
        // cout << endl;
        for (int i = 0; i < N - 1; i++) {
            int diff_cnt = 0;
            for (int j = 0; j < M; j++) {
                if (S[i][j] != S[i + 1][j]) diff_cnt++;
                // if (cnt == 0) {
                //     cout << S[i][j] << " " << S[i + 1][j] << endl;
                //     cnt++;
                // }
            }
            // if (cnt == 0) {
            //     cout << diff_cnt << ' ';
            //     cnt++;
            // }
            if (diff_cnt != 1) break;
            if (i == N - 2) {
                cout << "Yes" << endl;
                return 0;
            }
        }
        // cout << endl;
    } while (std::next_permutation(S.begin(), S.end()));
    cout << "No" << endl;
    // cout << cnt << endl;
    return 0;
}
