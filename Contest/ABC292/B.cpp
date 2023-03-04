#include <bits/stdc++.h>
using namespace std;
using ll = long long;

//

int main() {
    int n, q;
    cin >> n >> q;
    vector<bool> p(n, false);
    vector<int> card(n, 0);
    for (int i = 0; i < q; i++) {
        int x, y;
        cin >> x >> y;
        y--;
        if (x == 1) {
            card[y] += 1;
            if (card[y] >= 2) {
                p[y] = true;
            }
        } else if (x == 2) {
            p[y] = true;
        } else if (x == 3) {
            if (p[y])
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }
}