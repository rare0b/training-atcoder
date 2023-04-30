#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

// https://atcoder.jp/contests/arc140/editorial/3964

int main() {
    int n, k;
    string s;
    cin >> n >> k >> s;

    set<int> st;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            st.insert(i);
            st.insert(n / i);
        }
    }
    vector<int> div(st.begin(), st.end());
    for (auto d : div) {
        // cout << d << endl;
        int k_tmp = k;
        for (int i = 0; i < d; i++) {
            vector<int> cnt(26, 0);
            for (int j = i; j < n; j += d) {
                cnt[s[j] - 'a']++;
            }
            int M = *max_element(cnt.begin(), cnt.end());
            k_tmp -= n / d - M;
            // cout << i << ": " << n / d << " - " << M << endl;
        }
        if (k_tmp >= 0) {
            cout << d << endl;
            return 0;
        }
    }
}
