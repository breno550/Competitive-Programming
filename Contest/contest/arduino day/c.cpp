#include <bits/stdc++.h>
using namespace std;

#define pb push_back

#define sort_ar() sort(ar.begin(), ar.end());
#define sort_ar_inv() sort(ar.begin(), ar.end(), greater<>);

//g++ -o test -std=c++17 a.cpp

vector<int> ar;

int main(){
	int n, m;
	
	cin >> n >> m;
	
	int p[n][m], ent;
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> ent;
			p[i][j] = ent;
		}
	}
	
	
	/*for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cout << p[i][j] << " "; 
		}
		cout << endl;
	}*/
	int x, y;
	
	cin >> x >> y;
	
	int newp[x*n][m*y];
	
	int auxn=0, auxm=0;
	for(int i = 0; i < x*n; i++){
		if(auxn == n) auxn = 0;
		for(int j = 0; j < m * y; j++){
			if(auxm == m) auxm = 0;
			newp[i][j] = p[auxn][auxm];
			auxm++;
		}
		auxn++;
	}
	
	for(int i = 0; i < n*x; i++){
		for(int j = 0; j < m*y; j++){
			cout << newp[i][j] << " "; 
		}
		cout << endl;
	}
	
	return 0;
}
