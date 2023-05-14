#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/abc076/tasks/abc076_c

int main() {
    // 1.TがS'を満たすか判定、満たさない場合UNRESTORABLE
    // 2.満たす場合、できるだけ後ろの方に当てはめ、?はaにする
    string S, T;
    cin >> S >> T;
    int sta;
    if (S.size() < T.size()) {
        cout << "UNRESTORABLE" << endl;
        return 0;
    }
    for (int i = S.size() - 1; i >= T.size() - 1; i--) {
        bool flag = true;
        for (int j = T.size() - 1; j >= 0; j--) {
            // cout << i + j - T.size() + 1 << ' ' << j << endl;
            if (S[i + j - T.size() + 1] != '?' &&
                S[i + j - T.size() + 1] != T[j])
                flag = false;
        }
        if (flag) {
            sta = i - T.size() + 1;
            break;
        }
        if (i == T.size() - 1) {
            cout << "UNRESTORABLE" << endl;
            return 0;
        }
    }

    for (int i = 0; i < T.size(); i++) {
        S[sta] = T[i];
        sta++;
    }

    for (int i = 0; i < S.size(); i++) {
        if (S[i] == '?') S[i] = 'a';
    }

    cout << S << endl;
}
