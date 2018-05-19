#include <bits/stdc++.h>
using namespace std;


inline int solve(int nlin, int ncol){
	return (nlin/3) * (ncol/3);
}

int main(){
	int test;
	int n, m;
	cin >> test;
	
	while(cin >> n >> m && test--!=0){
		cout << solve(n, m) << endl;
	}
	
}

