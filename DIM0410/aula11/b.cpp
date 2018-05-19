#include <bits/stdc++.h>
using namespace std;

#define pb push_back

#define sort_ar() sort(ar.begin(), ar.end());
#define sort_ar_inv() sort(ar.begin(), ar.end(), greater<>);

//g++ -o test -std=c++17 a.cpp

vector<char> entrada;

int main(){
	int t;
	
		cin >> t;
	
	int test = 1;
	
	while(test <= t){
		cout << "Case " << test << ": ";
		test++;
		
		int n;
		cin >> n;
		
		string str1;
		
		cin >> str1;
		
		int ans=0;
		
		for(int i = 0; i < str1.size();i++){
			if(str1[i] == '#')
				continue;
			else{
				i+=2;
				ans++;			
			}
		}
		
		cout << ans << endl;
	}

	return 0;
}
