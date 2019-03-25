#include <iostream>
#include <deque>

using namespace std;

int main()
{
    int n;
    cin >> n;
    deque<int> v;
    for (int i = 0; i < n; i++){
        int h;
        cin >> h;
        v.push_back(h);
    }
    int s = 0, d = 0;
    int step = 0;
    while(v.size() > 0){
        if (step % 2 == 0){
            if (v.front() > v.back()){
                s += v.front();
                v.pop_front();
            }else{
                s += v.back();
                v.pop_back();
            }
        }else{
            if (v.front() > v.back()){
                d += v.front();
                v.pop_front();
            }else{
                d += v.back();
                v.pop_back();
            }
        }
        step++;
    }
    cout << s << ' ' << d;
    return 0;
}
