#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.github.io/ac-library/document_ja/scc.html

int main() {
    int n, m;
    cin >> n >> m;
    scc_graph g(n);
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        g.add_edge(a, b);
    }

    auto scc = g.scc();
    cout << scc.size() << endl;
    for (auto v : scc) {
        cout << v.size() << " ";
        for (auto x : v) {
            cout << x << " ";
        }
        cout << endl;
    }
}
