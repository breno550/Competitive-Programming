#include <bits/stdc++.h>
using namespace std;

#define pb push_back

#define sort_ar() sort(ar.begin(), ar.end());
#define sort_ar_inv() sort(ar.begin(), ar.end(), greater<>);
#define MAX 10005
//g++ -o test -std=c++17 a.cpp

map<int, int, std::greater<int>> dp; 
//dp[MAX];

int seek(int index){
	int result=0;
	
	/*for(int i = 1; i < i * i <= MAX; i++){
		
	}*/
	
	for(auto& [i, j] : dp){
		
	}
	
	
	if(result != 0)
		return result;
	else
		return 999999;
}

int main(){
	int n;
	
	cin >> n;
	
	for(int i = 1; i*i <= MAX; i++){
		dp[i] = i*i;
	}
	
	
	while(n--){
		int ent;
		
		scanf("%d", &ent);
				
				
		//cout << cont << endl;
	}

	 return 0;
}
