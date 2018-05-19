#include <bits/stdc++.h>
using namespace std;

#define pb push_back

#define sort_ar() sort(ar.begin(), ar.end());
#define sort_ar_inv() sort(ar.begin(), ar.end(), greater<>);

//g++ -o test -std=c++17 a.cpp

vector<int> ar;

int main(){
	string str1, str2;
	
	while(cin >> str1 >> str2){
		int next = 0, cont = 0;
		
		for(int i = 0; i < str1.size(); i++){
			for(int j = next; j < str2.size(); j++){
				if(str1[i] == str2[j]){
					cont++;
					next = j+1;
					break;
				}
			}
		}

		if(cont == str1.size())
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}	
	
	return 0;
}
