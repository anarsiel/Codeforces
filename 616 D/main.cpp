//http://codeforces.com/contest/616/problem/D

#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    int n, k;
    cin >> n >> k;
    vector<int> v;
    for (int i = 0; i < n; i++){
        int h;
        cin >> h;
        v.push_back(h);
    }
    vector<int> cnt(1e6 + 1, 0);
    set<int> s;
    int _l = 0, _r = 0;
    int l = 0, r = 0, answ = 1;
    cnt[v[0]]++;
    s.insert(v[0]);
    while (r + 1 < v.size()){
        r++;
        cnt[v[r]]++;
        s.insert(v[r]);

        while (s.size() > k){
            cnt[v[l]]--;
            if (cnt[v[l]] == 0)
                s.erase(v[l]);
            l++;
        }

        if (s.size() <= k){
            //cout << answ << ' ' << l << " " << k;
            if (answ < r - l + 1){
                answ = r - l + 1;
                _l = l;
                _r = r;
                //cout << " %";
            }
            //cout << endl;
        }
    }
    if (s.size() <= k){
        //cout << answ << ' ' << l << " " << k;
        if (answ < r - l + 1){
            answ = r - l + 1;
            _l = l;
            _r = r;
            cout << " %";
        }
        //cout << endl;
    }
    cout << _l + 1 << " " <<  _r + 1;
    return 0;
}
