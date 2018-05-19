#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define MAX INT_MAX

int main(){
	string ent;
	
	cin >> ent;
	
	int contl=0, contp=0;
	
	for(int i = 0; i < ent.size(); i++){
		if(ent[i] == '-')
			contl++;
		else if(ent[i] == 'o')
			contp++;	
	}
	
	if(contl == 0){
	 cout << "YES" << endl;
	} else {
		if(contp == 0) cout << "YES" << endl;
		else
		if(contl%contp != 0) cout << "NO" << endl;
		else 
		cout << "YES" << endl;
	} 
	return 0;
}
