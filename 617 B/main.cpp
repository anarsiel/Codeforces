#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long long> v, zero;
    bool was_1 = false;
    for (int i = 0; i < n; i++){
        int h;
        cin >> h;
        if (h == 1)
            was_1 = true;
        if (was_1)
            v.push_back(h);
    }

    if (v.size() == 0){
        cout << 0;
        return 0;
    }

    int cnt = 1;

    while(v[v.size() - 1] == 0){
        v.pop_back();
    }

    bool is_first = true;

    for (int i = 0; i < v.size(); i++){
        if (v[i] == 1){
            if (cnt != 0)
                zero.push_back(cnt);
            //cout << i << ' ';
            cnt = 1;
        }
        if (v[i] == 0){
            if (i == 0 || i == n){
                cnt--;
            }
            cnt++;
        }
    }

    //cout << endl;

    long long answ = 1;
    for (int i = 0; i < zero.size(); i++){
        answ *= zero[i];
        //cout << zero[i] << ' ';
    }
    cout    << answ;
    return 0;
}
