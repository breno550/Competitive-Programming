#include <bits/stdc++.h>
using namespace std;

#define pb push_back

#define sort_ar() sort(ar.begin(), ar.end());
#define sort_ar_inv() sort(ar.begin(), ar.end(), greater<>);

//g++ -o test -std=c++17 a.cpp

vector<int> ar;

int main(){
	int n;
	
	cin >> n;
	
	string str;
	
	cin >> str;
	
	bool flag = true;
	
	if(str.size() == 1){
		if(str[0] == '0'){
			cout << "No" << endl;
			return 0;
		} else {
			cout << "Yes" << endl;
			return 0;
		}
	} if(str.size() == 2){
		if(str[0] == str[1]){
			cout << "No" << endl;
			return 0;
		}
	}
	
	if(str[str.size()-1] == '0' && str[str.size()-2] == '0' || str[0] == '0' && str[1] == '0'){
		cout << "No" << endl;
		return 0;
	}
		
	for(int i = 1; i < n; i++){
		if(str[i-1] == '1' && str[i] == '1')
			flag = false;
		
		if(i + 1 < n){
			if(str[i] == '0' && str[i-1] == '0' && str[i+1] == '0')
				flag = false;
		}
		
	}
	
	if(flag)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	
	return 0;
}
