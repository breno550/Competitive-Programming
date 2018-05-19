#include <bits/stdc++.h>
using namespace std;
#define MAX 105

int main(){
	int field=1;
	int lin, col;
		
	while(cin >> lin >> col && lin+col != 0){
		char linha[MAX];
		vector<vector<int> > mapa(lin);
		
		if(field!=1)
		cout << endl;
		
		cout << "Field #" << field << ":" << endl;
		field++;
		
		for(int i = 0; i < lin; i++){
			cin >> linha;
			for( int j = 0; j < col; j++){
				if(linha[j] == '*')
					mapa[i].push_back(9);
				else
					mapa[i].push_back(0);
			}
		}
		
		for(int i = 0; i < lin; i++){
			for(int j = 0; j < col ; j++){
				if(mapa[i][j]>=9){
					
					//cima
					if((i+1 < lin))
						mapa[i+1][j]++;
					
					//direita	
					if((j+1 < col))
						mapa[i][j+1]++;
					
					//baixo
					if((i-1 >= 0))
						mapa[i-1][j]++;
					
					//esquerda	
					if((j-1 >= 0))
						mapa[i][j-1]++;
					
					//diag cima direita	
					if((i+1 < lin && j+1 < col))
						mapa[i+1][j+1]++;
					
					//diag cima esquerda
					if((i+1 < lin && j-1 >= 0))
						mapa[i+1][j-1]++;
					
					//diag baixo direita
					if((i-1 >= 0 && j+1 < col))
						mapa[i-1][j+1]++;
					
					//diag baixo esquerda
					if((i-1 >= 0 && j-1 >= 0))
						mapa[i-1][j-1]++;
						
					}
				}
			}
		
		//imprime a matrix
		for(int i = 0; i < lin; i++){
			for(int j = 0; j < col; j++){
				if(mapa[i][j] >= 9)
					cout << "*";
				else
				cout << mapa[i][j];
			}
			cout << endl;
		}
	}
	
	return 0;
}
