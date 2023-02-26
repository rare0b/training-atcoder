#include <bits/stdc++.h>
using namespace std;
using ll = long long;

//

int main() {
    int n;
    cin >> n;
    vector<int> x(5 * n);
    for (int i = 0; i < 5 * n; i++) {
        cin >> x[i];
    }
    sort(x.begin(), x.end());

    double sum = 0;
    for (int i = n; i < 4 * n; i++) {
        sum += x[i];
    }

    cout << setprecision(15) << sum / (3 * n) << endl;
}