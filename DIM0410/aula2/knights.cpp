#include <bits/stdc++.h>
using namespace std;
#define MAX 105

int grind[MAX][MAX];

inline void fill_lin(int x1, int x2, int y1, int y2){
	//distancia entre pontos
	int dist = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
	for(int i = x1; i < dist; i++){
		grind[i][y1]=1;
	}
}

inline void fill_col(int x1, int x2, int y1, int y2){
	//distancia entre pontos
	int dist = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
	for(int i = y1; i < dist; i++){
		grind[x1][i]=1;
	}
}

/*inline void check(int n, int m){
	//check na vertical
	for(int i = 0; i < n; i++){
		bool veri=false;
		int cont=0;
		int x1, x2, y1, y2;
		for(int j = 0; i < m; j++){
			if(grind[i][j]==1){
				if(x1 == 0 && y1 == 0){x1 = i; y1 = j;}
				else {x2 = i; y2 = j;}
				cont++;
			}
			if(cont==2){veri==true;}
			if(veri){fill_lin(x1, x2, y1, y2);}
		}
	}
	
	//check na horizontal
	for(int j = 0; j < m; j++){
		bool veri=false;
		int cont=0;
		int x1, x2, y1, y2;
		for(int i = 0; i < n; i++){
			if(grind[i][j]==1){
				if(x1 == 0 && y1 == 0){x1 = i; y1 = j;}
				else {x2 = i; y2 = j;}
				cont++;
			}
			if(cont==2){veri==true;}
			if(veri){fill_col(x1, x2, y1, y2);}
		}
	}
}*/

int main(){
	int n, m, k;
	int cont=0;
	int ans=0;
	
	scanf("%d%d%d", &n, &m, &k);
	int x[k], y[k];	
	
	while(k--){
		int x, y;
		cin >> x >> y;
		grind[x][y]=1;
	}
	
	//fill_lin(0,n,0,m);
	fill_col(1,n,1,m);
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cout << grind[i][j]; 
		}
		cout << endl;
	}

	
	return 0;
}

