#include <bits/stdc++.h>

using namespace std;

int main(){
	int a, b, c;
	cin >> a >> b >> c;
	for (int i = 0; a * i <= c; i++){
	 	int first = a * i;
	 	int second = c - first;
	 	if (second % b == 0){
	 	 	cout << "Yes";
	 	 	return 0;	
	 	}
	}
	cout << "No";
 	return 0;
}