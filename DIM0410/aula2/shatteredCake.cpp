#include <bits/stdc++.h>
using namespace std;

int main(){
	int wcake, lcake;
	int n;
	
	while(cin >> wcake){
		int atotal=0;
		cin >> n;
		while(n--){
			int x, y;
			scanf("%d%d", &x, &y);
			atotal += (x*y);
		}
		
		lcake = atotal / wcake;
		
		cout << lcake << endl; 	
		}
	return 0;
}
