#include <bits/stdc++.h>
using namespace std;

int main(){
	int test;
	string a, b;
	cin >> test;
	
	while(cin >> a >> b && test--!=0){
		int cont =0;
		map <char, int> m;
		
		for(int i = 0; i < b.size(); ++i){
			m[b[i]]++;
		} 
		
		for(int i = 0; i < a.size(); ++i){
			if(m[a[i]] == 0) break;
			cont++;
			m[a[i]]--;
		}
		cout << cont << endl;
	}

	return 0;	
}
