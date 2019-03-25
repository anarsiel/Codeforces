#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    vector<int> v(5);
    v[0] = 'h';
    v[1] = 'e';
    v[2] = 'l';
    v[3] = 'l';
    v[4] = 'o';

    int current = 0;
    for (int i = 0; i < s.size(); i++){
     	if (v[current] == s[i]){
     	 	current++;
     	}
     	if (current == 5){
     	 	cout << "YES";
     	 	return 0;
     	}
    }
    cout << "NO";
 	return 0;
}