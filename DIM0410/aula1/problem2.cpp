#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	int emp[3];
	int meio;
	
	cin >> t;
	
	for(int i = 1; i <= t ; i++){
		for(int j=0; j < 3; j++){
			cin >> emp[j];
		}
		
		sort(emp, emp+3);
		meio = emp[1];
		
		cout << "Case " << i << ": " << meio << endl;
	}
	return 0;
}
