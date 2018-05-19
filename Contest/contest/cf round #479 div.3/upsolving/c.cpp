#include <bits/stdc++.h>
using namespace std;

vector<int> ar;

int main(){
	int n, k;
	
	cin >> n >> k;
	
	for(int i = 0; i < n; i++){
		int ent;
		cin >> ent;
		ar.push_back(ent);
	}
	
	sort(ar.begin(), ar.end());
	
	if(ar[k] == ar[k-1]) cout << "-1" << endl;
	else if(k == 0){
		if(ar[0] == 1) cout << "-1" << endl;
		else cout << ar[0] - 1 << endl;
	} else {
		cout << ar[k-1] << endl;
	}

	return 0;
}
