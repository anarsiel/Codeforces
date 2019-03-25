//http://codeforces.com/problemset/problem/339/D

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int> > v(n);
    for (int i = 0; i < n; i++){
        int l = 1e9 + 1;
        for (int j = 0; j < m; j++){
            int h;
            cin >> h;
            v[i].push_back(h);
            l = min(l, h);
        }
        v[i].push_back(l);
    }
    int _max = -1e9;
    int line;
    for (int i = 0; i < n; i++){
        if (v[i][v[i].size() - 1] > _max){
            _max = v[i][v[i].size() - 1];
            line = i;
        }
    }
    _max = 1e9;
    for (int i = 0; i < m; i++){
        _max =  min(_max, v[line][i]);
    }
    cout << _max;
    return 0;
}
