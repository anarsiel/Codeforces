//http://codeforces.com/problemset/problem/339/A

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    cin >> s;
    vector<int> v;
    for (int i = 0; i < s.size(); i++){
        if (i % 2 == 0)
            v.push_back(s[i] - '0');
    }
    sort(v.begin(), v.end());
    //reverse(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++){
        cout << v[i];
        if (i != v.size() - 1)
            cout << "+";
    }
    return 0;
}
