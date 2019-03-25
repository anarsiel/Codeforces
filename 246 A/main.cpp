//http://codeforces.com/problemset/problem/246/A

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n <= 2)
        cout << -1;
    else{
        for (int i = 0; i < n; i++)
            cout << 55 - i << " ";
    }
    return 0;
}
