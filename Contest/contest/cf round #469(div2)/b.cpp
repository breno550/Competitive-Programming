#include <bits/stdc++.h>
using namespace std;

#define pb push_back

#define sort_ar() sort(ar.begin(), ar.end());
#define sort_ar_inv() sort(ar.begin(), ar.end(), greater<>);

//g++ -o test -std=c++17 a.cpp

vector<int> ar;
vector<int> ar2;

int main(){
	long long n, m;
	
	cin >> n >> m;
	
	long long ent;
	
	for(long long i = 0; i < n; i++){
		//scanf("%d", &ent);
		cin >> ent;
		ar.pb(ent);
	}
	
	for(long long i = 0; i < m; i++){
		//scanf("%d", &ent);
		cin >> ent;
		ar2.pb(ent);
	}
	
	long long i = 1, j = 1, soma1 = ar[0], soma2 = ar2[0], cont = 0;
	
	long long arsize = ar.size();
	long long ar2size = ar2.size();
	
	
	while(i <= ar.size() && j <= ar2.size()){
		if(soma1 != soma2){
			/*cout << "ar[i] " << ar[i] << " ar2[j] " << ar2[j] << " somas " << soma1 << " " << soma2 << " cont " << cont << endl;*/
			if(soma1 < soma2){
				soma1+=ar[i];
				i++;
			} else if(soma1 > soma2){
				soma2+=ar2[j];
				j++;
			}
		} else if (soma1 == soma2 && i != 1 || j != 1){
			cont++;
			i++;
			j++;
			soma1 = ar[i];
			soma2 = ar2[j];
		} else if(soma1 == soma2 && i == 1 && j == 1){
			cont++;
			soma1 = ar[i];
			soma2 = ar2[j];
			i++;
			j++;
		}
	}
	
	cout << cont << endl;
	
	return 0;
}
