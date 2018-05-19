#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	int sumxor=0;
	
	scanf("%d%", &n);
	
	scanf("%d", &sumxor);
	
	for(int i = 1, v; i < n ; i++){
		scanf("%d", &v);
		sumxor ^= v; 
	}
	
	printf("%d\n", sumxor);
	
	return 0;
}
