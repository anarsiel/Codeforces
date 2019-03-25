//http://codeforces.com/problemset/problem/339/B

#include <iostream>
#include <vector>

using namespace std;

int abs(int a){
    if (a > 0)
        return a;
    return -a;
}

int main()
{
    int n, m;
    cin >> n >> m;
    int here = 1;
    long long out = 0;
    for (int i = 0; i < m; i++){
        int current;
        cin >> current;
        if (here > current)
            out += n - here + current;
        else
            out += current - here;
        //cout << out << ' ';
        here = current;
    }
    cout << out;
    return 0;
}
