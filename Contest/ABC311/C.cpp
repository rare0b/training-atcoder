#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    int n;
    cin >> n;
    scc_graph graph(n);
    vector<int> to(n);
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        a--;
        graph.add_edge(i, a);
        to[i] = a;
    }

    auto scc = graph.scc();
    auto ans_vec = scc[scc.size() - 1];

    int sz = ans_vec.size();
    cout << sz << endl;

    int v = ans_vec[0];
    for (int i = 0; i < sz; i++) {
        cout << v + 1 << " \n"[i == sz - 1];
        v = to[v];
    }
    cout << endl;
}
