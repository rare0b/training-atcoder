#include <bits/stdc++.h>
using namespace std;
using ll = long long;

//

int main() {
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] - 'a' < 0) {
            cout << i + 1 << endl;
        }
    }
}