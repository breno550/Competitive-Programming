#include <bits/stdc++.h>
using namespace std;

#define pb push_back

#define sort_ar() sort(ar.begin(), ar.end());
#define sort_ar_inv() sort(ar.begin(), ar.end(), greater<>);

//g++ -o test -std=c++17 a.cpp

vector<int> ar;
int mult[2];

int main(){
	int ent;
	bool flag=false;
	int cont = 0;
	
	for(int i = 0; i < 5; i++){
		cin >> ent;
		
		if(ent < 0)
			cont++;
		
		if(cont>=2)
			flag = true;
			
		ar.pb(ent);
	}
	
	sort(ar.begin(), ar.end(), greater<int>());
	
	/*cout << ar[ar.size()-1] << " " << ar[ar.size()-2] << " " << ar[0] << " " << ar[1] << endl << endl;*/
	if(flag){
		if(ar.size() > 3){
			if(ar[ar.size()-1] * ar[ar.size()-2] >= ar[1] * ar[0]){
				ar[ar.size()-1] = ar[ar.size()-1] * -1; 	
				ar[ar.size()-2] = ar[ar.size()-2] * -1;
			}
		} if(ar.size() == 2){
			if(ar[ar.size()-1] * ar[ar.size()-2] >= ar[1] * ar[0]){
				ar[ar.size()-1] = ar[ar.size()-1] * -1; 	
				ar[ar.size()-2] = ar[ar.size()-2] * -1;
			}
		}
	}
	
	sort(ar.begin(), ar.end(), greater<int>());
	
	int ans = 1;
	
	for(int i = 0; i < 3; i++){
		if(ar[i] > 0)
		ans *= ar[i];
	}
	
	cout << ans << endl;
	
	return 0;
}
