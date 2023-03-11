#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<bool> flag(n, false);
    int count = n;
    for (int i = 0; i < n; i++) {
        if (!flag[i]) {
            int ind = a[i] - 1;
            if (!flag[ind]) {
                flag[ind] = true;
                count--;
            }
        }
    }

    cout << count << endl;
    for (int i = 0; i < n; i++) {
        if (!flag[i]) {
            count--;
            cout << i + 1 << " \n"[!count];
        }
    }
}