#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	int sum;
	int x=2,y=1;
	bool cond;
	
	cin >> n;
	
	cout << n << ":" << endl;
	
	for(int i = 0 ; x <= n/2+1; i++){
		sum = 0;
		cond = false;
		for(int j = 0; j < n/2; j++){
			if(x!=n)
			sum+=x;
			
			if(sum==n){
			cond = true;
			}
			
			if(y!=n)
			sum+=y;
			
			if(sum==n){
			cond = true;
			}	
		}
		
		if(cond == true){
			cout << x << "," << y << endl;
		}
		
		if(x > y){
			y++;
		} else {
			x++;
		}	
	}

	return 0;
}
