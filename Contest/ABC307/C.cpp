#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main() {
    // すべての黒いマスを切り出す ※ABの黒いマスの重なりはOK
    // A,Bの黒いマスをXに重ねられるか？確認
    // 重ねられる場合、A,Bを重ねた結果がXの黒いマスと一致するか？保持する

    int ha, wa, hb, wb, hx, wx;
    cin >> ha >> wa;
    vector<string> a(ha);
    for (int i = 0; i < ha; i++) cin >> a[i];
    cin >> hb >> wb;
    vector<string> b(hb);
    for (int i = 0; i < hb; i++) cin >> b[i];
    cin >> hx >> wx;
    vector<string> x(hx);
    for (int i = 0; i < hx; i++) cin >> x[i];

    // 透明マスtrue、黒いマスfalse
    vector<vector<bool>> ok(hx, vector<bool>(wx));
    for (int i = 0; i < hx; i++) {
        for (int j = 0; j < wx; j++) {
            if (x[i][j] == '#')
                ok[i][j] = false;
            else
                ok[i][j] = true;
        }
    }

    // A,B再構築
    int min_h = 100, max_h = 0, min_w = 100, max_w = 0;
    for (int i = 0; i < ha; i++) {
        for (int j = 0; j < wa; j++) {
            if (a[i][j] == '#') {
                min_h = min(min_h, i);
                max_h = max(max_h, j);
                min_w = min(min_w, j);
                max_w = max(max_w, j);
            }
        }
    }
    vector<string> new_a;
    for (int i = min_h; i <= max_h; i++) {
        string tmp_s = "";
        for (int j = min_w; j <= max_w; j++) {
            tmp_s += a[i][j];
        }
        new_a.push_back(tmp_s);
    }

    int min_h = 100, max_h = 0, min_w = 100, max_w = 0;
    for (int i = 0; i < hb; i++) {
        for (int j = 0; j < wb; j++) {
            if (b[i][j] == '#') {
                min_h = min(min_h, i);
                max_h = max(max_h, j);
                min_w = min(min_w, j);
                max_w = max(max_w, j);
            }
        }
    }
    vector<string> new_b;
    for (int i = min_h; i <= max_h; i++) {
        string tmp_s = "";
        for (int j = min_w; j <= max_w; j++) {
            tmp_s += b[i][j];
        }
        new_b.push_back(tmp_s);
    }

    ha = new_a.size(), wa = new_a[0].size();
    hb = new_b.size(), wb = new_b[0].size();

    for (int i = 0; i < hx - ha + 1; i++) {
        for (int j = 0; j < wx - wa + 1; j++) {
        }
    }
}
