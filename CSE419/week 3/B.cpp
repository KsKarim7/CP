#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    int app[n];
    int ap[m];
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        app[i] = x;
        mp[x]++;
    }
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &ap[i]);
    }
    sort(app, app + n);
    sort(ap, ap + m);

    int count = 0;
    map<int, int>::iterator it = mp.begin();

    int i = 0;
    while (it != mp.end())
    {
        if (i == m)
            break;
        if (it->first <= ap[i] + k && it->first >= ap[i] - k)
        {
            count++;
        }

        i++;
        it++;
        // printf("%d\n", count);
    }
    // while (it != mp.end())
    // {
    //     cout << "Key: " << it->first
    //          << ", Value: " << it->second << endl;
    //     it++;
    // }
    // for (int i = 0; i < m; i++)
    printf("%d\n", count);
    return 0;
}