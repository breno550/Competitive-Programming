#include <bits/stdc++.h>
using namespace std;
#define MAX 1000005
int main(){
	
	char str1[MAX];
	int n=0, caso=1;
	
	while(cin >> str1 && cin >> n){
		cout << "Case " << caso << ":" << endl;
		++caso;
		
		while(n--){
			int inicio=0, fim=0;
			int i=0, j=0;
			bool cond=true;
			
			cin >> i >> j;	
			inicio = min(i,j);
			fim = max(i,j);
			
			for(int i = inicio, j = fim;i <= j; i++){
				if(str1[i] != str1[j])
					cond = false;
			}
			
			if(cond)
				cout << "Yes" << endl;
			else
				cout << "No" << endl;
			}
		}
	return 0;
}
