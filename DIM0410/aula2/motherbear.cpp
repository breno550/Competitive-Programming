#include <bits/stdc++.h>
using namespace std;

int main(){
	string s1;
	string success = "You won't be eaten!";
	string failer = "Uh oh..";
	
	while(getline(cin, s1) && s1 != "DONE"){
	
	bool flag = true;
	
		//todas letras pra minusculo		
		for(int i = 0; i < s1.size(); i++){
			if(s1[i] >= 'A' && s1[i] <= 'Z')
				s1[i] = tolower(s1[i]);
		}
		
		for(int i = 0, j = s1.size()-1; i < j; ++i, j--){
			while(!isalpha(s1[i])){
			i++;
			}
			while(!isalpha(s1[j])){
			j--;
			}
			
			if(s1[i] != s1[j]){ 
			flag = false; 
			cout << failer;
			break;
			}
		} 
		
		if(flag)
		cout << success;
		
		cout << endl;
	}
	return 0;
}
