#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    // [a-z] or @
    string S, T;
    cin >> S >> T;
    vector<int> Scnt(26, 0), Tcnt(26, 0);
    vector<char> atcoder{'a', 't', 'c', 'o', 'd', 'e', 'r'};
    int Sat = 0, Tat = 0;
    for (int i = 0; i < S.size(); i++) {
        if (S[i] != '@')
            Scnt[S[i] - 'a']++;
        else
            Sat++;
    }
    for (int i = 0; i < T.size(); i++) {
        if (T[i] != '@')
            Tcnt[T[i] - 'a']++;
        else
            Tat++;
    }

    for (int i = 0; i < 26; i++) {
        if (Scnt[i] == Tcnt[i]) continue;
        if (Scnt[i] > Tcnt[i]) {
            char c = i + 'a';
            auto itr = find(atcoder.begin(), atcoder.end(), c);
            if (itr != atcoder.end()) {
                Tat -= Scnt[i] - Tcnt[i];
            } else {
                cout << "No" << endl;
                return 0;
            }
        } else {
            char c = i + 'a';
            auto itr = find(atcoder.begin(), atcoder.end(), c);
            if (itr != atcoder.end()) {
                Sat -= Tcnt[i] - Scnt[i];
            } else {
                cout << "No" << endl;
                return 0;
            }
        }
    }

    if (Sat >= 0 && Tat >= 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
