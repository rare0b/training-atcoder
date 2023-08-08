#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/abc093/tasks/abc093_b

int main() {
    set<int> st;
    int a, b, k;
    cin >> a >> b >> k;
    for (int i = a; i <= b && i < a + k; i++) {
        st.insert(i);
    }
    for (int i = b; i >= a && i > b - k; i--) {
        st.insert(i);
    }

    for (auto itr = st.begin(); itr != st.end(); itr++) {
        cout << *itr << endl;
    }
}
