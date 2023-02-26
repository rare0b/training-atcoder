#include <bits/stdc++.h>
using namespace std;
using ll = long long;

//

int main() {
    int n;
    string s;
    cin >> n >> s;
    set<pair<int, int>> st;
    // こういう書き方も
    // set<pair<int,int>>used({{0,0}});
    // 外の{}はsetの中身という意味、内の{}はpairという意味
    int x = 0, y = 0;
    st.insert(pair(x, y));
    for (int i = 0; i < n; i++) {
        if (s[i] == 'R') {
            x++;
        } else if (s[i] == 'L') {
            x--;
        } else if (s[i] == 'U') {
            y++;
        } else if (s[i] == 'D') {
            y--;
        }
        // auto p = pair(x, y);
        auto itr = st.find(pair(x, y));
        //            find({x,y})
        if (itr != st.end()) {
            cout << "Yes" << endl;
            return 0;
        }
        // cout << x << ',' << y << endl;

        st.insert(pair(x, y));
    }

    cout << "No" << endl;
}