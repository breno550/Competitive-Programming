#include <bits/stdc++.h>
using namespace std;

vector<int> vbook;

int main(){
	int nbook, money;
	
	while(cin >> nbook){
		int vbook[nbook], ndif = INT_MAX;
		int book1, book2;
		for(int i = 0; i < nbook; i++){
			scanf("%d", &vbook[i]);
		}
		
		cin >> money;
		
		int dif;
		
		for(int i = 0; i < nbook; i++){
			for(int j = i+1; j < nbook; j++){
				if(vbook[i] + vbook[j] == money){
					dif = abs(vbook[i] - vbook[j]);
					
					if(dif < ndif) {
					ndif = dif;
					book1 = vbook[i];
					book2 = vbook[j];
					}
				}
				
			}
		} 
	
		if(book1 < book2) printf("Peter should buy books whose prices are %d and %d.\n\n", book1, book2);
		else printf("Peter should buy books whose prices are %d and %d.\n\n", book2, book1);
	}

	return 0;
}
