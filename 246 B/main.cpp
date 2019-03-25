//http://codeforces.com/problemset/problem/246/B

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    long long sum = 0;
    for (int i = 0; i < n; i++){
        int h;
        cin >> h;
        sum += h;
    }
    if (sum % n == 0)
        cout << n;
    else
        cout << n - 1;
    return 0;
}
