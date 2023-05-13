#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    int N;
    string S;
    cin >> N >> S;
    int t = 0, a = 0;
    for (int i = 0; i < N; i++) {
        if (S[i] == 'T')
            t++;
        else
            a++;
    }

    if (t == a) {
        if (S[N - 1] == 'T')
            t--;
        else
            a--;
    }

    if (t > a) {
        cout << "T" << endl;
    } else {
        cout << "A" << endl;
    }
}
