#include <bits/stdc++.h>

#include <atcoder/all>
using namespace std;
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
    uf.marge(a, b);
  }

  int ans = uf.groups().size() - 1;
  cout << ans << endl;
}