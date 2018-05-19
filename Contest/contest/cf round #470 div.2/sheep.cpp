#include <bits/stdc++.h>
using namespace std;

int main(){
	int r, c;
	bool flag=false;
	cin >> r >> c;
	
	vector<vector <char>> board(r);
	
	for(int i = 0; i < r; i++){
		char ent[505];
		cin >> ent;
		for(int j = 0; j < c; j++){
			board[i].push_back(ent[j]);
			
		}
	}

	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			if(board[i][j] == 'S'){
				//cima
				if(i-1 >= 0){
					if(board[i-1][j] == 'W')
						flag = true;
				}
				//baixo
				if(i+1 < r){
					if(board[i+1][j] == 'W')
						flag = true;
				}
				//direita
				if(j+1 < c){
					if(board[i][j+1] == 'W')
						flag = true;
				}
				//esquerda
				if(j-1 >= 0){
					if(board[i][j-1] == 'W')
						flag = true;
				}
			} else { 
			continue;
			}
		}
	}
	
	if(flag)
		cout << "No" << endl;
	else {
		cout << "Yes" << endl;
		
		for(int i = 0; i < r; i++){
			for(int j = 0; j < c; j++){
				if(board[i][j] == '.')
				cout << 'D';
				else
				cout << board[i][j];
			}
			cout << endl;
		}
	}
		
	return 0;
}
