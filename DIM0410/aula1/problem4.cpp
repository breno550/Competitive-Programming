#include <bits/stdc++.h>
using namespace std;

int verificar(int lin, int col){
	int grind[lin][col];
	int sonar[3][3];
	bool linpar=false, colpar=false;
	
	if(lin % 2 == 0)
	linpar = true;
	
	if(col % 2 == 0)
	colpar = true;
	
	for(int i = 0; i < lin; i+=3){
		for(int j = 0; j < col; j+=3){
			
		}
	}
	
	for(int i = 1; i < lin; i+=3){
		for(int j = 1; j < col; j+=3){
			
		}
	}
	return ;
}

int main(){
	int test;
	int n, m;
	cin >> test;
	
	while(cin >> n >> m && --test!=0){
		cout << verificar(n, m);
	}
	
	

	return 0;
}

