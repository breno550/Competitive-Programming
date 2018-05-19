#include <bits/stdc++.h>
using namespace std;

int main(){
	string str;
	int n, nmax=-1;
	string ans;
	
	cin >> n;
	cin >> str;

	map<string, int> lulz;
	
	for(int i = 0; i < n; i++){
		if(i+1 < n){
			char a, b;
			a = str[i];
			b = str[i+1];
			x
			string act; 
			string inv_act;
			
			act = a;
			act += b;
			//inv_act = b;
			//inv_act += a;
			
			//if(act == inv_act){
				lulz[act]++;
			/*} /*else {
				lulz[act]++;
				lulz[inv_act]++;
			}*/
		}
	}
	
	map<string, int>::iterator it;
	
	for(it = lulz.begin(); it != lulz.end(); it++){
		if(it->second > nmax){
			nmax = it->second;
			ans = it->first;
		}
	}
	
	cout << ans << endl;
	
	return 0;
}
