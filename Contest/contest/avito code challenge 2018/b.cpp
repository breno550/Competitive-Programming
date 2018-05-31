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
map<ll, ll> wtf;

int main(){
	ll n;
	ll sum1 = 0, sum2 = 0;

	FAST();
	cin >> n;

	for(ll i = 0; i < n; i++){
		ll indx, pric;
		cin >> indx >> pric;

		wtf[indx] = pric;
		sum1 += pric;
	}

	cin >> n;

	for(ll i = 0; i < n; i++){
		ll indx, pric;
		cin >> indx >> pric;
		if(wtf[indx] == 0){
			sum2 += pric;
		} else {
			if(wtf[indx] > pric){
				continue;
			} else {
				sum1 -= wtf[indx];
				sum2 += pric;
			}
		}
	}

	cout << sum1 + sum2 << endl;
	return 0;
}
