#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> vec;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        vec.push_back({a, b});
    }
    sort(vec.begin(), vec.end());
    // for (auto i : vec)
    // {
    //     cout << i.first << " " << i.second << endl;
    // }
    pair<int, int> p(vec[0].first, vec[0].second);
    int count = 0, res = 0;
    for (int i = 1; i < vec.size(); i++)
    {
        if (vec[i].first > p.first && vec[i].second < p.second)
        {
            // p.first = vec[i].first;
            // p.second = vec[i].second;
            count += 2;
        }
        else
        {
            count = 0;
            p.first = vec[i].first;
            p.second = vec[i].second;
        }
        if (res < count)
        {
            res = count;
        }
    }
    cout << res << endl;
    return 0;
}