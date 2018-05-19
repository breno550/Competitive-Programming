#include <bits/stdc++.h>
using namespace std;

#define pb push_back

#define sort_ar() sort(ar.begin(), ar.end());
#define sort_ar_inv() sort(ar.begin(), ar.end(), greater<>);

//g++ -o test -std=c++17 a.cpp

vector<int> ar;

int main(){
	int n;
	
	cin >> n;
	
	int ent;
	
	for(int i = 0; i < n; i++){
		scanf("%d", &ent);
		ar.pb(ent);
	}	
	
	sort_ar();
	
	if(ar.size() % 2 == 0){
		cout << ar[n/2 - 1] << endl;
	} else if(ar.size() % 2 != 0){
		cout << ar[n/2] << endl;
	}
	
	return 0;
}
