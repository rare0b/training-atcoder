#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

vector<bool> Eratosthenes(int N) {
    // テーブル
    vector<bool> isprime(N + 1, true);

    // 0, 1 は予めふるい落としておく
    isprime[0] = isprime[1] = false;

    // ふるい
    for (int p = 2; p <= N; ++p) {
        // すでに合成数であるものはスキップする
        if (!isprime[p]) continue;

        // p 以外の p の倍数から素数ラベルを剥奪
        for (int q = p * 2; q <= N; q += p) {
            isprime[q] = false;
        }
    }

    // 1 以上 N 以下の整数が素数かどうか
    return isprime;
}

int main() {
    ll N;
    cin >> N;
    ll sq = sqrt(N);
    // 50 以下の素数をすべて求める
    vector<bool> isprime = Eratosthenes(sq);
    vector<ll> aabcc;
    for (ll i = 0; i < sq; i++) {
        if (isprime[i]) aabcc.push_back(i);
    }

    ll ans = 0;
    for (ll i = 0; i < aabcc.size(); i++) {
        if (N / (aabcc[i] * aabcc[i]) <= 0) break;
        for (ll j = i + 1; j < aabcc.size(); j++) {
            if (N / (aabcc[i] * aabcc[i] * aabcc[j]) <= 0) break;
            for (ll k = j + 1; k < aabcc.size(); k++) {
                if (N / (aabcc[i] * aabcc[i] * aabcc[j] * aabcc[k] *
                         aabcc[k]) >=
                    1)
                    ans++;
                else
                    break;
            }
        }
    }

    cout << ans << endl;
}