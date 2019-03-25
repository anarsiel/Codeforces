#include <iostream>
#include <vector>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    vector<long long> v;
    for (long long i = 0; i < n; i++){
        long long h;
        cin >> h;
        v.push_back(h);
    }
    long long m = 1e9;
    for (long long i = 0; i < n; i++){
        m = min(m, v[i]);
    }
    long long first_min = -1, last_min = -1;
    for (long long i = 0; i < n; i++){
        if (v[i] == m){
            if (last_min == -1){
                first_min = i;
            }
            last_min = i;
        }
    }
    cout << m * n + n - last_min - 1 + first_min;
    return 0;
}
