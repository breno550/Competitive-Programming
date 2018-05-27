#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define sort_ar() sort(ar.begin(), ar.end());
#define sort_ar_inv() sort(ar.begin(), ar.end(), greater<>);
#define FAST() ios_base::sync_with_stdio(false)
//g++ -o test -std=c++17 a.cpp

typedef long long ll;
const int INF = 0x3f3f3f3f;
vector<int> ar;
ll dp[30005][5];
int coin[] = {1, 5, 10, 25, 50};

ll solve(int val, int index_coin){
	//cada solve retorna se eh possivel ou nao preencher val com certa moeda
	if(index_coin > 4) return 0;
	if(val == 0) return 1;
	if(val < 0) return 0;

	if(dp[val][index_coin] != -1) return dp[val][index_coin];

	//dentro de dp[val][index_coin] adiciona 1 (se for possivel) ou 0 (se nao for possivel) pra a proxima moeda (index+1) e adiciona a moeda atual diminuindo val ate chegar a 1 ou 0
	dp[val][index_coin] = solve(val, index_coin + 1) + solve(val - coin[index_coin], index_coin);

	return dp[val][index_coin];
}

int main(){
	int n;

	memset(dp, -1, sizeof(dp));

	while(cin >> n){
		ll ans = solve(n, 0);

		if(ans == 1)
			cout << "There is only 1 way to produce " << n << " cents change." << endl;
		else
			cout << "There are " << ans << " ways to produce " << n << " cents change." << endl;
	}

	return 0;
}
