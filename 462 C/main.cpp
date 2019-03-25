#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    long long answ = 0;
    long long sum = 0;
    for (int i = 0; i < n; i++){
        int h;
        cin >> h;
        v.push_back(h);
        sum += h;
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++){
	answ += sum;
	sum -= v[i];
	answ += v[i];	
    }
    cout << answ - v[v.size() - 1];
    return 0;
}
