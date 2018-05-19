#include <bits/stdc++.h>
using namespace std;

#define pb push_back

#define sort_ar() sort(ar.begin(), ar.end());
#define sort_ar_inv() sort(ar.begin(), ar.end(), greater<>);

//g++ -o test -std=c++17 a.cpp

vector<int> ar;

int main(){
	int ent;
	
	for(int i = 0; i < 5; i++){
		cin >> ent;
		ar.pb(ent);
	}
	
	int nmax = 1;
	for(int i = 0; i < ar.size(); i++){
		if(ar[i] > nmax) nmax = ar[i];
		for(int j = i+1; j < ar.size(); j++){
			if(ar[j] * ar[i] > nmax) nmax = ar[j] * ar[i];
			for(int k = j+1; k < ar.size(); k++){
				if(ar[i] * ar[j] * ar[k] > nmax) nmax = ar[i] * ar[j] * ar[k]; 
			} 
		}
	}
	
	cout << nmax << endl;
	
	return 0;
}
