#include <bits/stdc++.h>

#define sz(a) int(a.size())

using namespace std;

const int INF = 1e9 + 239;

int main(){
#ifdef LocalHost
    freopen("file.in", "r", stdin);
    freopen("file.out", "w", stdout);
#endif
    int n;
    scanf("%d", &n);

    string s;
    cin >> s;

    set<char> kek;

    for (int i = 0; i < n; ++i)
        kek.insert(s[i]);

    int k = sz(kek);

    if (k == 1){
        cout << 1;
        return 0;
    }
    
    int l = 0;
    int r = 0;
    
    multiset<char> st;

    st.insert(s[0]);

    int sz = 1, answ = INF;

    for (int i = 1; i < n; i++){
        r = i;

        int to_add = s[r];

        if (!st.count(to_add))
            sz++;

        st.insert(to_add);
                
        while (sz == k){
            answ = min(answ, r - l + 1);
            //cout << l << ' ' << r << endl;
            int to_del = s[l];
            l++;
            st.erase(st.find(to_del));
            if (!st.count(to_del))
                sz--;
        }
    }

    /*int p = sz(st);

    for (int i = 0; i < p; i++){
        cout << *st.begin() << ' ';
        st.erase(st.begin());
    }*/

    cout << answ;
    return 0;
}
