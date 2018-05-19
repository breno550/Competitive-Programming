#include <bits/stdc++.h>
using namespace std;

int main(){
	string str;
	int n;
	
	cin >> n >> str;
	
	map<string, int> mapa;
	
	for(int i = 0; i < n; i++){
		if(i+1< n){
			string aux;
			char a = str[i], b = str[i+1];
			aux = a;
			aux += b;
			mapa[aux]++;
		}
	}
	
	map<string, int>::iterator it;

	string ans;
	int maxn=-1;
	
	for(it = mapa.begin(); it != mapa.end(); it++){
		if(it->second > maxn){
			maxn = it->second;
			ans = it->first;
		}
	}
	
	cout << ans << endl;
	return 0;
}
