#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/code-festival-2016-qualb/tasks/codefestival_2016_qualB_b

int main() {
    int N, A, B;
    string S;
    cin >> N >> A >> B >> S;
    int all_cnt = 0, b_cnt = 0;
    for (int i = 0; i < N; i++) {
        if (S[i] == 'a') {
            if (all_cnt < A + B) {
                cout << "Yes" << endl;
                all_cnt++;
            } else
                cout << "No" << endl;
        } else if (S[i] == 'b') {
            if (all_cnt < A + B && b_cnt < B) {
                cout << "Yes" << endl;
                all_cnt++;
            } else {
                cout << "No" << endl;
            }
            b_cnt++;
        } else {
            cout << "No" << endl;
        }
    }
}
