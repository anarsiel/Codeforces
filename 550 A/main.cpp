#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    string s;
    cin >> s;
    int n = s.size();
    int l = 0;
    int r = -1;
    char symbol = '$';
    int cnt = 0;
    long long answ = 0;
    while (r + 1 < n){
       r++;
       if (symbol == '$' || s[r] == '?' || s[r] == symbol) {
            if (s[r] != '?') symbol = s[r];
            cnt += s[r] == symbol;
            continue;
        }
        symbol = s[r];
        while (cnt > 0) {
            answ += r - l;
            cnt -= s[l] == symbol;
            l++;
        }
        cnt = 1;
    }
    answ += (r - l) * 1LL * (r - l + 1) / 2;
    cout << answ;
   return 0;
}