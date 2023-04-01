#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    vector<string> s(8);
    for (int i = 0; i < 8; i++) cin >> s[i];
    int a, b;
    char c[8] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
    int n[8] = {8, 7, 6, 5, 4, 3, 2, 1};
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (s[i][j] == '*') a = i, b = j;
        }
    }
    char x = n[a] + '0';
    cout << c[b] << x << endl;
}