#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/abc116/tasks/abc116_b

int main() {
    int s;
    cin >> s;
    set<int> st;

    int post_s = s;
    st.insert(s);
    int i = 2;
    while (true) {
        post_s = s;
        if (post_s % 2 == 0) {
            s = post_s / 2;
        } else {
            s = post_s * 3 + 1;
        }

        if (st.find(s) != st.end()) {
            cout << i << endl;
            return 0;
        }
        st.insert(s);
        i++;
    }
}
