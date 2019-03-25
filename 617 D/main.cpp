#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    pair<int, int> a, b, c;
    cin >> a.first >> a.second;
    cin >> b.first >> b.second;
    cin >> c.first >> c.second;
    vector<pair<int, int> > v;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    sort(v.begin(), v.end());
    a = v[0];
    b = v[1];
    c = v[2];
    if (a.first == b.first){
        if (b.first == c.first){
            cout << 1;
            return 0;
        }
        if (b.second == c.second){
            cout << 2;
            return 0;
        }
        cout << 3;
        return 0;
    }
    if (a.second == b.second){
        if (b.second == c.second){
            cout << 1;
            return 0;
        }
        if (b.first == c.first){
            cout << 2;
            return 0;
        }
        cout << 33;
        return 0;
    }
    if (b.second == c.second || b.first == c.first){
        cout << 2;
    }else{
        cout << 333;
    }
    return 0;
}
