#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    int pre = -1;
    for (int i = 0; i < 8; i++) {
        int s;
        cin >> s;
        bool flag = true;
        if (s < 100 || s > 675) flag = false;
        if (s % 25 != 0) flag = false;
        if (s < pre) flag = false;

        if (!flag) {
            cout << "No" << endl;
            return 0;
        }

        pre = s;
    }

    cout << "Yes" << endl;
    return 0;
}
