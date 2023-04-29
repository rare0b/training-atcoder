#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    int N, A, B;
    cin >> N >> A >> B;
    for (int i = 1; i <= N; i++) {
        int C;
        cin >> C;
        if (C == A + B) {
            cout << i << endl;
            return 0;
        }
    }
}