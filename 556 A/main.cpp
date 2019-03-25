#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < s.size(); i++){
        if (s[i] == '1')
            cnt1++;
        else
            cnt2++;
    }
    cout << max(cnt1, cnt2) - min(cnt1, cnt2);
    return 0;
}
