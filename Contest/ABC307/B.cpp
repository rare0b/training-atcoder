#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    int n;
    cin >> n;
    vector<string> s(n);
    for (int i = 0; i < n; i++) {
        string ss;
        cin >> ss;
        s[i] = ss;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            bool flag = true;
            string ss = s[i] + s[j];
            for (int i = 0; i < ss.length() / 2; i++) {
                if (ss[i] != ss[ss.length() - i - 1]) flag = false;
            }
            if (flag) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}
