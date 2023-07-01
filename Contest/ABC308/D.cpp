#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    vector<char> snuke = {'s', 'n', 'u', 'k', 'e'};
    vector<int> xx = {0, 1, 0, -1};
    vector<int> yy = {1, 0, -1, 0};
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    for (int i = 0; i < h; i++) cin >> s[i];

    // vector<vector<bool>> seen(h, vector<bool>(w, false));
    queue<tuple<int, int, int>> q;
    map<tuple<int, int, int>, bool> mp;
    // seen[0][0] = true;
    auto tmp = find(snuke.begin(), snuke.end(), s[0][0]);
    if (tmp != snuke.end()) {
        auto t = make_tuple(0, 0, distance(snuke.begin(), tmp));
        q.push(t);
        mp.insert(make_pair(t, true));
    }

    int cnt = 0;
    while (!q.empty()) {
        auto p = q.front();
        q.pop();

        int now_y = get<0>(p);
        int now_x = get<1>(p);
        int now_ind = get<2>(p);
        // seen[now_y][now_x] = true;
        // cout << now_y << " " << now_x << " " << now_ind << endl;

        if (now_x == w - 1 && now_y == h - 1) {
            cout << "Yes" << endl;
            return 0;
        }

        for (int i = 0; i < 4; i++) {
            auto t =
                make_tuple(now_y + yy[i], now_x + xx[i], (now_ind + 1) % 5);

            if (now_x + xx[i] >= 0 && now_x + xx[i] < w && now_y + yy[i] >= 0 &&
                now_y + yy[i] < h &&
                s[now_y + yy[i]][now_x + xx[i]] == snuke[(now_ind + 1) % 5] &&
                mp.find(t) == mp.end()) {
                q.push(t);
                mp.insert(make_pair(t, true));
                // cout << cnt << ":" << now_y + yy[i] << " " << now_x + xx[i]
                //      << " " << now_ind << " " << endl;
            }
        }
        cnt++;
    }
    cout << "No" << endl;
    return 0;
}
