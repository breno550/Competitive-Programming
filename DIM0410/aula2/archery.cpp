#include <bits/stdc++.h>
using namespace std;

int main(){
	int n=0;
	int sumYU=0;
	int sumYE=0;
	int xYU=0;
	int xYE=0;
	int yu10=0;
	int ye10=0;
	
	string so = "Shoot-off";
	string yu = "Yuju";
	string ye = "Yerin";
	
	
	cin >> n;
	
	for(int i = 0; i < n * 2; i++){
		string str1;
		cin >> str1;
		
		if(str1[0] == 'M') continue;
		
		if(i < n){
			if(str1[0] == 'X'){
				sumYU+=10;
				xYU++;			
			} else {
				int p;
				stringstream buffer;
				buffer << str1;
				buffer >> p;
				
				if(p == 10) yu10++;
				
				sumYU += p;
				}
			} else {
			if(str1[0] == 'X'){
				sumYE+=10;
				xYE++;			
			} else {
				int p;
				stringstream buffer;
				buffer << str1;
				buffer >> p;
				
				if(p == 10) ye10++;
				
				sumYE += p;
			}
		}
	}
	
	if(sumYU == sumYE){
		if(yu10+xYU == ye10+xYE){
			if(xYU == xYE){ cout << so;}
			else {
				if(xYU > xYE){ cout << yu; }
				 else { cout << ye;}
				}
			} else {
				if(yu10+xYU > ye10+xYE){ cout << yu; }
					else { cout << ye; }
			} 
		}
	if(sumYU > sumYE){ cout << yu; }
	
	if(sumYU < sumYE){ cout << ye; }
	
	return 0;	
}
