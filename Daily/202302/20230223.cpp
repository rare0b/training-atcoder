// ABC057 B

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n, m;
  cin >> n >> m;
  vector<pair<int, int>> s(n), p(m);

  for (int i = 0; i < n; i++) {
    cin >> s[i].first >> s[i].second;
  }
  for (int i = 0; i < m; i++) {
    cin >> p[i].first >> p[i].second;
  }

  int mi, ans;
  int y, x;
  for (int i = 0; i < n; i++) {
    mi = 1000000000;
    // 私は最小値を10^9で初期化した(問題ではそれよりも小さい距離が必ず存在する)
    // が、解説にあったように、1つ目の距離で初期化して、↓のfor文をj=1から始める方が汎用性高そう。
    for (int j = 0; j < m; j++) {
      y = abs(s[i].first - p[j].first);
      x = abs(s[i].second - p[j].second);

      if (mi > x + y) {
        mi = x + y;
        ans = j + 1;
      }
    }
    // ansがinitializeされてないよ、とエラーになった(ACはした)。
    // mi = 1000000000やcin >> n >> mは良くても、
    // ans = j + 1はダメらしい。jに依存するから？
    cout << ans << endl;
  }
}