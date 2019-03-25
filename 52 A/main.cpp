#include <iostream>

using namespace std;

int main()
{
    int n;
    ios_base::sync_with_stdio(false);
    cin >> n;
    int cnt1  = 0, cnt2 = 0, cnt3 = 0;
    for (int i = 0; i < n; i++){
        int h;
        cin >> h;
        if (h == 1)
            cnt1++;
        if (h == 2)
            cnt2++;
        if (h == 3)
            cnt3++;
    }
    cout << min(cnt1 + cnt2, min(cnt2 + cnt3, cnt1 + cnt3));
    return 0;
}
