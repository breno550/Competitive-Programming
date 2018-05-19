#include <bits/stdc++.h>
using namespace std;
#define MAX 105

char mapa[MAX][MAX];
int lin, col;

int check(int n, int m){
	int cont=0;
	
	//cima
	if((n+1) < lin){
		if(mapa[n+1][m] == '*') {
			cont++;
		}
	}
	
	//direita
	if((m+1) < col){
		if(mapa[n][m+1] == '*'){
			cont++;
			}
	}
	
	//baixo
	if((n-1) >= 0){
		if(mapa[n-1][m] == '*'){
			cont++;
		}
	}
	
	//esquerda
	if((m-1) >= 0){
		if(mapa[n][m-1] == '*'){
			cont++;
		}
	}
	
	//diag cima direita
	if(n+1 < lin && m+1 < col){
		if(mapa[n+1][m+1] == '*'){
			cont++;
		}
	}
	
	//diag cima esquerda
	if(n+1 < lin && m-1 >= 0){
		if(mapa[n+1][m-1] == '*'){
			cont++;
		}
	}
	
	//diag baixo direita
	if(n-1 >= 0 && m+1 < col){
		if(mapa[n-1][m+1] == '*'){
			cont++;
		}
	}
	
	//diag baixo esquerda
	if(n-1 >= 0 && m-1 >= 0){
		if(mapa[n-1][m-1] == '*'){
			cont++;
			}
	}

	return cont;
}

int main(){

	cin >> lin >> col;
	
	char ent;
	
	for(int i = 0; i < lin; i++){
		for(int j = 0; j < col; j++){
			cin >> ent;
			mapa[i][j] = ent;
		}
	}
	
	bool flag=true;
	
	for(int i = 0; i < lin; i++){
		for(int j = 0; j < col; j++){
			
			if(mapa[i][j] == '.'){
				//cout << "i " << i << " j " << j << " check " << check(i,j) << endl;
				if(check(i, j) == 0){
					//flag = true;
				} else {
					flag = false;
					
				}
			} else if(isdigit(mapa[i][j])){
				int cont=0, atu = mapa[i][j] - 48;
				//cout << "i " << i << " j " << j << " check " << check(i,j) << " atu " << atu << endl;
				if(check(i, j) == atu){
					//flag = true;
				} else {
					flag = false;
					break;
				}			
			}
		}
	}		
	
	if(flag)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;	
	return 0;
}
