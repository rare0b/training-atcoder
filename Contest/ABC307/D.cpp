#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    int n;
    cin >> n;
    string ss;
    cin >> ss;
    stack<int> stk;
    priority_queue<pair<int, int>, vector<pair<int, int>>,
                   greater<pair<int, int>>>
        pq;
    for (int i = 0; i < n; i++) {
        if (ss[i] == '(') {
            stk.push(i);
        } else if (!stk.empty() && ss[i] == ')') {
            int tmp = stk.top();
            stk.pop();
            pq.emplace(tmp, i);
        }
    }

    int ind = 0;
    while (!pq.empty()) {
        auto [s, e] = pq.top();
        // cout << s << " " << e << endl;
        pq.pop();

        for (int i = ind; i < s; i++) {
            cout << ss[i];
        }
        ind = max(ind, e + 1);

        if (ind >= ss.length()) break;
    }
    if (ind < ss.length()) {
        for (int i = ind; i < ss.length(); i++) {
            cout << ss[i];
        }
    }
    cout << endl;
}
