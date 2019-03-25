#include <iostream>
#include <vector>

using namespace std;

vector<int> v;

int main()
{
    int n;
    cin >> n;
    cout << n;
    for (int i = 1; i < n; i++){
        cout << " " << i;
    }
    return 0;
}
