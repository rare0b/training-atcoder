#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    int x = 1;
    int y = 1;
    vector<int> z(10, 0);
    z[0] = 10;
    z[1] = 100;

    cout << "x: " << x << endl;
    // 1が出力される

    cout << "z[--x]: " << z[--x] << endl;
    // 10(z[0])が出力される

    cout << "x: " << x << endl;
    // 0が出力される
    // イン/デクリメントは他の式の中、例えば添字でも、評価だけでなく実行される
    // 破壊的にしたくないならx - 1とでもすれば良いだけ

    cout << "y: " << y << endl;
    // 1が出力される

    cout << "z[y--]: " << z[y--] << endl;
    // 100(z[1])が出力される
    // 後置なので実行後にデクリメント

    cout << "y: " << y << endl;
    // 0が出力される
}
