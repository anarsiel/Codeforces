#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	vector<pair<int, int> > v;
	for (int i = 0; i < n; ++i){
	 	int a, b;
	 	cin >> a >> b;
	 	v.push_back({a, b});
	}
	sort(v.begin(), v.end());

	int last = -1e9;

	for (int i = 0; i < n; i++){
	 	if (last <= v[i].second){
	 	 	last = v[i].second;
	 	}else{
	 	 	last = v[i].first;
	 	}
	}
	cout << last;
 	return 0;
}                        