//http://codeforces.com/problemset/problem/414/A

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    if (n == 1){
        if (k == 0)
            cout << 1;
        else
            cout << -1;
        return 0;
    }
    int p = n / 2;
    if (k < p){
        cout << -1;
        return 0;
    }
    int x = k - (n - 2) / 2;
    cout << x << ' ' << 2 * x << ' ';
    int cnt = 1;
    for (int i = 1; i < (n - 2) / 2 + 1; i++){
        while (cnt == x || cnt == 2 * x || cnt + 1 == 2 * x || cnt + 1 == x)
            cnt++;
        cout << cnt << ' ' << cnt + 1 << ' ';
        cnt += 2;
    }
    if (n % 2 == 1){
        while (cnt == x || cnt == 2 * x || cnt + 1 == 2 * x || cnt + 1 == x)
            cnt++;
        cout << cnt;
    }
    return 0;
}
