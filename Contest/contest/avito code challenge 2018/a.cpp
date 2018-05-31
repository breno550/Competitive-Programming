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
	string str;

	cin >> str;

	bool flag = true;
	bool pali = true;
	for(int i = 0; i < str.size(); i++){
		if(!(str[i] == str[str.size() - i - 1]))
			pali = false;

		if(i + 1 < str.size()){
			if(str[i] == str[i+1])
				continue;
			else
				flag = false;
		}
	}

	if(pali){
		if(!flag)
			cout << str.size() - 1 << endl;
		else
			cout << "0" << endl;
	} else {
		cout << str.size() << endl;
	}
		return 0;
}
