#include <bits/stdc++.h>
using namespace std;

int main(){
	int c, r;
	double k;
	bool flag=false;
	cin >> r >> c >> k;
	
	if(k == 0)
		cout << "1 1" << endl;
	
	if(k == r*c)
		cout << "1 2" << endl;
		
	int cont=0;
	int x=1, y=1;
	for(int i = 0; i < r * c; i++){
		if(cont == k) break;
		
		if(i < r){
		y++;
		cont++;
		}
		else
		if(i > r){
			if(x < c && !flag){
				x++;
				cont++;
			} else if(x==c){
				flag = true;
			} 
			
			if(y < r && flag){
				
			}
			
			
		}
	}

	return 0;
}
