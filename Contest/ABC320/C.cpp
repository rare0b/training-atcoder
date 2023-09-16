#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    int m;
    cin >> m;
    vector<string> s(3);
    cin >> s[0] >> s[1] >> s[2];
    int ans = 1e9;

    vector<int> v = {0, 1, 2};
    vector<vector<int>> pt;
    do {
        pt.push_back(v);
    } while (std::next_permutation(v.begin(), v.end()));

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 6; j++) {
            // cout << pt[j][0] << pt[j][1] << pt[j][2] << ": ";
            vector<int> stop;
            for (int k = 0; k < 3; k++) {
                int index = 1e9;
                for (int l = 0; l < s[pt[j][k]].size(); l++) {
                    int number = s[pt[j][k]][l] - '0';
                    if (number != i) continue;

                    int now_index = l;

                    for (int n = 0; n < k; n++) {
                        auto itr = find(stop.begin(), stop.end(), now_index);
                        if (itr != stop.end()) now_index += m;
                    }

                    index = min(index, now_index);
                }
                if (index != 1e9) stop.push_back(index);
            }
            if (stop.size() != 3) continue;
            int M = *max_element(stop.begin(), stop.end());
            ans = min(ans, M);

            // cout << stop[0] << stop[1] << stop[2] << endl;
        }
    }

    if (ans == 1e9)
        cout << -1 << endl;
    else
        cout << ans << endl;
}
