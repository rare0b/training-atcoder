#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<bool> flags(1000000001);

    int tmp;
    for (int i=0; i<n; i++) {
        cin >> tmp;
        flags[tmp] = true;
    }

    int ans = 0;
    for (int i=0; i<k; i++) {
        if(flags[i]) {
            ans++;
        } else {
            break;
        }
    }

    cout << ans << endl;
}