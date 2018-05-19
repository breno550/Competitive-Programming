#include <bits/stdc++.h>
using namespace std;

int main(){
	int n=0;
	int num1, num2;
	cin >> n;
	
	for(int i = 0; i < n;i++){
	cin >> num1;
	cin >> num2;
	if(num1 < num2){
		cout << "<" << endl;
	} else if ( num1 > num2) {
		cout << ">" << endl;
	} else if ( num1 == num2){
		cout << "=" << endl;	
		}
	}
	return 0;
}
