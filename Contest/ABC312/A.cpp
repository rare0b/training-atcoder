#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    string s;
    cin >> s;
    vector<string> ss = {"ACE", "BDF", "CEG", "DFA", "EGB", "FAC", "GBD"};
    for (auto sss : ss) {
        if (s == sss) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}
