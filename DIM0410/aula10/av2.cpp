#include <bits/stdc++.h>
using namespace std;

#define pb push_back

#define sort_ar() sort(ar.begin(), ar.end());
#define sort_ar_inv() sort(ar.begin(), ar.end(), greater<>);
#define MAX 10005
//g++ -o test -std=c++17 a.cpp

//vector<int> ar;

int main(){
	int n;
	
	while(cin >> n && n){
		int ar[MAX], dp[MAX], aux=0;
		bool flag=false;
		
		for(int i = 0; i < n; i++){
			scanf("%d", &ar[i]);
			
			if(ar[i] > 0)
				flag = true;
		}
		
		if(!flag){
			printf("Losing streak.\n");
			continue;
		}
		
		memset(dp, 0, sizeof(dp));
		
		dp[0] = ar[0];
		
		/*anterior + sucessor maior que o sucessor? sim, joga pra frente a soma, se nao, dp[i] = comeca nova sequencia*/ 
		for(int i = 1; i < n; i++){
			if(dp[i-1] + ar[i] > ar[i])
				dp[i] = dp[i-1] + ar[i];
			 else
				dp[i] = ar[i];
		}
		
		for(int i = 0; i < n; i++){
			if(aux < dp[i])
				aux = dp[i];
		}
		
		if(aux == 0){
			printf("Losing streak.\n");
		} else {
			printf("The maximum winning streak is %d.\n", aux);
		}
	}
	
	return 0;
}
