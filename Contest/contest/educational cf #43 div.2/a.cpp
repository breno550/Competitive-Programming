#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; 
	double cont=0;
	bool flag=false;
	vector<char> str;
	cin >> n;
	
	string ent;
	cin >> ent;
	
	for(int i = 0; i < ent.size(); i++){
		if(ent[i] == '1') flag = true;
		
		if(ent[i] == '0' && flag)
		cont++;
	}
	
	//cout << cont << endl;
	if(cont == 0 && !flag){
		cout << "0" << endl;
	} else {
	cout << "1";
	
	for(int i = 0; i < cont; i++){
		cout << "0";
	}
	}
	return 0;
}
