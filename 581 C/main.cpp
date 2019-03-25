//http://codeforces.com/problemset/problem/581/C

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v;
    vector<pair<int, int> > d;
    for (int i = 0; i < n; i++){
        int h;
        cin >> h;
        v.push_back(h);
        d.push_back(make_pair(10 - (h % 10), i));
    }
    sort(d.begin(), d.end());
    while (k > 0){
        bool flag = false;
        for (int i = 0; i < n; i++){
            if (v[d[i].second] == 100)
                continue;
            int current = min(k, d[i].first);
            k -= current;
            v[d[i].second] += current;
            d[i].first = 10;
            flag = true;
            if (k == 0){
                break;
            }
        }
        if (!flag)
            break;
    }
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += v[i] / 10;
    }
    cout << sum;
    return 0;
}
