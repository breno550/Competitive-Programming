#include <bits/stdc++.h> 
using namespace std; 
int main() { 	
int cont; 	
int n; 	
	cin >> n; 	 	
	while(n--){ 		
	string a, b; 		
	cont = 0; 		 		
	cin >> a >> b; 		 		
	map <char, int> m; 		 		
	for(int i = 0; i < b.length(); ++i) 
		m[b[i]]++; 		 		
	for(int i = 0; i < a.length(); ++i){ 	
			if(m[a[i]] == 0) break; 			
			cont++; 			
			m[a[i]]--; 		
			}
		 		cout << cont << endl; 	
	 		} 
 			return 0;
 }
