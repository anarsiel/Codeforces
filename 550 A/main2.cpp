#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    string s;
    cin >> s;
    long long n = s.size();
    long long l = 0;
    long long r = -1;
    char symbol = '$';
    long long cnt = 0;
    long long answ = 0;
    while (r + 1 < n){
       r++;
       if ((symbol == '$') || (s[r] == '?') || (s[r] == symbol)) {
            if (s[r] != '?')
            	symbol = s[r];
            cnt += int(s[r] == symbol);
            continue;
        }
        symbol = s[r];
        answ += (r - l) * (r - l + 1) / 2;
        while (cnt > 0) {                    
            cnt -= int(s[l] == symbol);
            l++;
        }
        cnt = 1;
    }
    answ += (r - l) * 1LL * (r - l + 1) / 2;
    cout << answ;
   return 0;
}