#include <bits/stdc++.h>

using namespace std;

const int INF = 1e9 + 239;

int main(){
#ifdef LocalHost
    freopen("input.in", "r", stdin);
    freopen("output.out", "w", stdout);
#endif

    int n;      
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    vector<vector<int> > dp(n);

    for (int i = 0; i < n; i++)
        dp[i].resize(3, INF);

    dp[0][0] = 1;

    if (v[0] == 1){
        dp[0][1] = 0;
    }

    if (v[0] == 2){
        dp[0][2] = 0;
    }

    if (v[0] == 3){
        dp[0][1] = 0;
        dp[0][2] = 0;
    }

    for (int i = 1; i < n; i++){
        if (v[i] == 0){
            dp[i][0] = min(dp[i - 1][0], min(dp[i - 1][1], dp[i - 1][2])) + 1;
        }else if (v[i] == 1){
            dp[i][0] = min(dp[i - 1][0], min(dp[i - 1][1], dp[i - 1][2])) + 1;
            dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]);
        }else if (v[i] == 2){
            dp[i][0] = min(dp[i - 1][0], min(dp[i - 1][1], dp[i - 1][2])) + 1;
            dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]);
        }else{
            dp[i][0] = min(dp[i - 1][0], min(dp[i - 1][1], dp[i - 1][2])) + 1;
            dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]);
            dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]);
        }
    }

    /*for (int i = 0; i < n; i++)
        cout << dp[i][0] << ' ';
    cout << endl;

    for (int i = 0; i < n; i++)
        cout << dp[i][1] << ' ';
    cout << endl;

    for (int i = 0; i < n; i++)
        cout << dp[i][2] << ' ';
    cout << endl;*/

    cout << min(min(dp[n - 1][0], dp[n - 1][1]), dp[n - 1][2]);
    return 0;
}