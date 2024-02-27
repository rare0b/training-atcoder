#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main()
{
    int n, q;
    string s;
    cin >> n >> s >> q;
    string alphabet = "abcdefghijklmnopqrstuvwxyz";

    for (int i = 0; i < q; i++)
    {
        char c, d;
        cin >> c >> d;

        for (int j = 0; j < 26; j++)
            if (alphabet[j] == c)
                alphabet[j] = d;
    }

    for (int i = 0; i < n; i++)
    {
        cout << alphabet[s[i] - 'a'];
    }
    cout << endl;
}
