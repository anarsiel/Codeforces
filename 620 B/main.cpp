#include <iostream>
#include <vector>

using namespace std;

int sticks(int n){
    if (n == 1)
        return 2;
    if (n == 7)
        return 3;
    if (n == 4)
        return 4;
    if (n == 2 || n == 3 || n == 5)
        return 5;
    if (n == 6 || n == 9 || n == 0)
        return 6;
    if (n == 8)
        return 7;
}

int main()
{
    int a, b;
    cin >> a >> b;
    int answ = 0;

    for (int i = a; i <= b; i++){
        int _i = i;
        while (_i > 0){
            answ += sticks(_i % 10);
            _i /= 10;
        }
    }
    cout << answ;
    return 0;
}
