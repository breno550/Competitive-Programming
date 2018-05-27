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
int l, n;
ll best, worst;

void solve(ll ant){
	double meio = l / 2;
	if(ant > meio){
			//best
		if(abs(ant - l) > best){
			best = abs(ant - l);
		}
		//worst
		if(ant > worst){
			worst = ant;
		}
	} else {
		//best
		if(ant > best){
			best = ant;
		}
		//worst
		if(abs(ant - l) > worst){
			worst = abs(ant - l);
		}
	}
}

int main(){
	int ncase;

  cin >> ncase;

  while(ncase--){
  	cin >> l >> n;

    for(int i = 0; i < n; i++){
      long long ent;
      cin >> ent;
      solve(ent);
    }

		cout << best << " " << worst << endl;
		best = 0;
		worst = 0;
	}

	return 0;
}
