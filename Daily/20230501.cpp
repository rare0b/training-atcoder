#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/abc217/tasks/abc217_e

int main() {
    deque<int> deq;
    priority_queue<int, vector<int>, greater<int>> que;
    int Q;
    cin >> Q;
    for (int i = 0; i < Q; i++) {
        int t;
        cin >> t;
        if (t == 1) {
            int X;
            cin >> X;
            deq.push_back(X);
        } else if (t == 2) {
            if (que.size()) {
                cout << que.top() << endl;
                que.pop();
            } else {
                cout << deq.front() << endl;
                deq.pop_front();
            }
        } else {
            for (auto a : deq) {
                que.push(a);
            }
            deq.clear();
        }
    }
}
