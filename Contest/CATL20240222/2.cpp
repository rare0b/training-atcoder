#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;

//

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());

    int left = 0,
        right = 0, count = 1, max_count = 1;
    while (true)
    {
        right++;
        count++;
        if (right == n)
        {
            break;
        }

        while (true)
        {
            int length = a[right] - a[left];
            if (length > m - 1)
            {
                left++;
                count--;
            }
            else
            {
                break;
            }
        }

        max_count = max(max_count, count);
    }

    cout << max_count << endl;
}
