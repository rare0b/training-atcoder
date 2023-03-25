#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    int n;
    cin >> n;
    vector<string> w;
    w = {"and", "not", "that", "the", "you"};
    for (int i = 0; i < n; i++) {
        string x;
        cin >> x;
        for (int j = 0; j < 5; j++) {
            if (x == w[j]) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
}