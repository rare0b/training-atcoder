#include <bits/stdc++.h>

#include <atcoder/dsu>
using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/abl/tasks/abl_c

int main() {
  int n, m;
  cin >> n >> m;

  dsu uf(n);

  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    uf.merge(a, b);
    // cout << uf.merge(a, b) << endl;
  }
  // int xcount = 0;
  // for (auto x : uf.groups()) {
  //   for (auto y : x) {
  // 		cout << xcount << ' ' << y << endl;
  //   }
  //   xcount++;
  // }
  int ans = uf.groups().size() - 1;
  cout << ans << endl;
}