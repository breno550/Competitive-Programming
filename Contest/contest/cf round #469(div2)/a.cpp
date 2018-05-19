#include <bits/stdc++.h>
using namespace std;

#define pb push_back

#define sort_ar() sort(ar.begin(), ar.end());
#define sort_ar_inv() sort(ar.begin(), ar.end(), greater<>);

//g++ -o test -std=c++17 a.cpp

vector<int> ar;

int main(){
	int l, r, a;
	
	cin >> l >> r >> a;
	
	if(l == 0 && a == 0 || r == 0 && a == 0){
		cout << "0" << endl;
		return 0;
	}
	
	bool flag=false;
	
	for(int i = 0; a != 0; i++){
		if(l < r && a > 0){
			a--;
			l++;
		} else
		
		if(r < l && a > 0){
			a--;
			r++;
		} else {
			r++;
			a--;
		}
	}	
	
	while(l != r){ 
		if(l > r)
			l--;
		else if(r > l)
			r--;
	}
	
	if(r == 1 && r == 1){
		cout << "2" << endl;
		return 0;
	} else if(r == 0 || l == 0){
		cout << "0" << endl;
		return 0;
	}
	
	int ans;
	
	for(int i = 2; flag!=true; i++){
		if(i / l == 1 && i / r == 1){
			flag = true;
			ans = i;
		} else
		continue;			
	}
	
	cout << ans * 2 << endl; 
	
	return 0;
}
