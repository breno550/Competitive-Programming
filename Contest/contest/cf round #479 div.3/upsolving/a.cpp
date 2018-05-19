#include <bits/stdc++.h>
using namespace std;

int main(){
	int num, op;
	
	cin >> num >> op;
	
	for(int i = 0; i < op; i++){
		if(num%10!=0){
			num--;
		} else
		if(num%10==0){
			num = num/10;
		}
	}
	
	cout << num;

	return 0;
}
