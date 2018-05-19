#include <bits/stdc++.h>
using namespace std;

#define MAX 1000

vector<int> ar;

int fib(int num){
	if(num==1 || num==2)
		return 1;
	else
		return fib(num-1)+fib(num-2);
}

int isFib(int num){
	for(int i : ar)
		if(i == num) return true;
		
	return false;
}

int main(){
	for(int i = 0; i < 16; i++){
		ar.push_back(fib(i+1));
	}
	
	int n;
	
	cin >> n;
	
	for(int i = 1; i <= n; i++){
		bool flag = isFib(i);
		if(flag){
			cout << "O";	
		} else {
			 cout << "o";
		}
	}
	
	return 0;
}
