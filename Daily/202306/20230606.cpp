#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

bool is_valid(string s) {
    int cnt = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(')
            cnt++;
        else
            cnt--;
        if (cnt < 0) return false;
    }
    return (cnt == 0);
}

int main() {
    int n;
    cin >> n;

    if (n % 2 == 1) return 0;

    for (int i = 0; i < (1 << n); i++) {
        string s = "";

        for (int j = n - 1; j >= 0; j--) {
            if (!(i & (1 << j)))
                s += '(';
            else
                s += ')';
        }

        if (is_valid(s)) cout << s << endl;
    }
}
