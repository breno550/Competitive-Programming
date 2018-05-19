#include <bits/stdc++.h>
using namespace std;

#define pb push_back

#define sort_ar() sort(ar.begin(), ar.end());
#define sort_ar_inv() sort(ar.begin(), ar.end(), greater<>);

//g++ -o test -std=c++17 a.cpp

//vector<int> ar;
map<long long, int> m;

int main(){
	int n;
	
	cin >> n;
	
	vector<vector<long long>> ar;
	
	for(int i = 1; i <= n; i++){
		long long ent;
		cin >> ent;
		
		m[ent] = 0;
	}
	
	for(int i = 0; i < n*2; i++){
		char ent;
		
		cin >> ent;
		
		if(ent == '0'){
				
			
		} else {
		
		}
	}
	
	
	return 0;
}
