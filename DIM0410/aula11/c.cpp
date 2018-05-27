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

int main(){
	int n, d, r;

	while(cin >> n >> d >> r && n){
		vector<int> morn;
		vector<int> aft;

		int ent;

		for(int i = 0; i < n; i++){
			scanf("%d", &ent);
			//cin >> ent;
			morn.pb(ent);
		}

		for(int i = 0; i < n; i++){
			scanf("%d", &ent);
			//cin >> ent;
			aft.pb(ent);
		}

		sort(morn.begin(), morn.end());
		sort(aft.begin(), aft.end());

		int pay = 0;

		for(int i = 0; i < n; i++){
			if(morn[i] + aft[aft.size() - i - 1] > d)
				pay += r * (morn[i] + aft[aft.size() - i - 1] - d);

		}

		cout << pay << endl;
	}
	return 0;
}
