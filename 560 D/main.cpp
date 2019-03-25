#include <bits/stdc++.h>

using namespace std;

bool eqw(string a, string b){
 	if (a == b)
 		return true;
 	if (a.size() % 2 == 1 || b.size() % 2 == 1)
 		return false;
 	string a1 = a.substr(0, a.size() / 2);
 	string a2 = a.substr(a.size() / 2, a.size() / 2);

 	string b1 = b.substr(0, b.size() / 2);
 	string b2 = b.substr(b.size() / 2, b.size() / 2);
 	return eqw(a1, b1) && eqw(a2, b2) || eqw(a1, b2) && eqw(a2, b1);
}

int main(){
	string s1, s2;
	cin >> s1 >> s2;
	if (eqw(s1, s2))
		cout << "YES";
	else
		cout << "NO"; 
	return 0;
}