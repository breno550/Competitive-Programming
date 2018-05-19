#include <bits/stdc++.h>
using namespace std;

map<string, string> ma;

int main(){
	int n, m;
	
	cin >> n >> m;
	
	for(int i = 0; i < n; i++){
		string ip, name;
		cin >> name >> ip;
		ma[ip]=name;
	}
	
	
	for(int i = 0; i < m; i++){
		string command, ip;
		cin >> command >> ip;
		
		//map<string, string>::iterator it = ma.find(ip);
		cout << command << " " << ip << " #" << ma[ip] << endl;  
	}
	
	return 0;
}
