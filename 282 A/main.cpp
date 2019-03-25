#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int current = 0;
    for (int i = 0; i < n; i++){
        string s;
        cin >> s;
        if (s[0] == '+' || s[2] == '+')
            current++;
        else
            current--;
    }
    cout << current;
    return 0;
}
