#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>

using namespace std;

int main()
{
    int n;
    cin >> n;
    deque<int> d;
    vector<int> v, cnt(5239, 0);
    for (int i = 0; i < n; i++){
        int h;
        cin >> h;
        if (cnt[h] < 2){
            cnt[h]++;
            v.push_back(h);
        }
    }

    sort(v.begin(), v.end());
    if (v.size() >= 2 && v[v.size() - 1] == v[v.size() - 2]){
        v.pop_back();
    }
    reverse(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++){
        if (i % 2 == 0){
            d.push_back(v[i]);
        }else{
            d.push_front(v[i]);
        }
    }
    cout << d.size() << endl;
    for (int i = 0; i < v.size(); i++){
        cout << d.front() << ' ';
        d.pop_front();
    }
    return 0;
}
