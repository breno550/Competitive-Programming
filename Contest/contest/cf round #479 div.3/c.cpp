#include <bits/stdc++.h>
using namespace std;

map<int, int> vdc;
bool ans=false;

void du(int val, int k){
	int cont=0;
	map<int, int>::iterator it;
		
	for(it = vdc.begin();it != vdc.end(); it++){
		if(cont > k) break;
		
		if(it->first <= val) cont++;
	}
	
	if(cont == k) {
		cout << val-1 << endl;
		ans=true;
	}
}

int main(){
	int n, k;
	bool flag=false;

	cin >> n >> k;
	
	for(int i = 0; i < n; i++){
		int ent;
		scanf("%d", &ent);
		vdc[ent]++;
		
		if(k <= ent)
			flag = true;
	}
	
	if(!flag){
		cout << "-1" << endl;
	} else {
		for(int i = k; ans!=true; i++){
			du(i, k);
		}
	}	
	
	return 0;
}
