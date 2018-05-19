#include <bits/stdc++.h>
using namespace std;

#define MAX 3 * 10101

vector<int> grafo[MAX];
int vis[MAX];

void dfs(int y){
	vis[y] = 1;
	
	for(int i = 0; i < grafo[y].size(); i++){
		int x = grafo[y][i];
		
		if(!vis[x]){
			dfs(x);
		}
	}
}

int main(){
	int n, t;
	
	cin >> n >> t;
	
	for(int i = 1; i < n; i++){
		int x;
		cin >> x;
		
		grafo[i].push_back(i+x); 
	}

	dfs(1);
	
	if(vis[t])
		cout << "YES";
	else
		cout << "NO";
	
	return 0;
}
