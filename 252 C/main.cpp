//http://codeforces.com/problemset/problem/252/C?locale=ru

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;
    vector<int> v;
    for (long long i = 0; i < n; i++){
        long long h;
        cin >> h;
        v.push_back(h);
    }
    long long cnt = 0;
    long long l = 0, r = 1;
    while(r < v.size()){
        while (v[r] - v[l] > k){
            l++;
        }
        long long g = r - l;
        cnt += (g - 1) * g / 2;
        r++;
    }
    cout << cnt;
    return 0;
}
