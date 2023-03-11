#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    string s;
    cin >> s;
    for (int i = 0; i < s.size() / 2; i++) {
        i++;
        swap(s[2 * i - 1], s[2 * i - 2]);
        i--;
    }

    cout << s << endl;
}