#include <bits/stdc++.h>
using namespace std;

#define pb push_back

#define sort_ar() sort(ar.begin(), ar.end());
#define sort_ar_inv() sort(ar.begin(), ar.end(), greater<>);
#define MAX 1e6
//g++ -o test -std=c++17 a.cpp

unsigned int ar[50];

int main(){
	int n;
	
	cin >> n;
	bool flag=false;
	int cont2 =0;
	int ent;
	for(int i = 0; i < n; i++){
		scanf("%d", &ent);
		ar[i] = ent;
		
		if(ent > 0)
			cont2++;
	}
	
	if(cont2 > 2)
		flag = true;
		
	if(!flag){
		cout << 0 << endl;
		return 0;
	}
	
	int cont = 0;

	for(int i = 0; i < n; i++){
		for(int j = i+1; j < n; j++){
			if(ar[i] > ar[j] && ar[i] > 0 && ar[j] > 0){
				if(ar[i] % ar[j] < 1 && i != j)
					cont++;
			}			
			else if(ar[i] <= ar[j]){
				if(ar[j] % ar[i] < 1 && i != j)
					cont++;
			}
		}
	}
	
	if(cont != 1)
	cout << cont << endl;
	else if(cont == 1)
	cout << cont+1 << endl;
	return 0;
}
