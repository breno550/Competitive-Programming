#include <bits/stdc++.h>
using namespace std;

#define pb push_back

#define sort_ar() sort(ar.begin(), ar.end());
#define sort_ar_inv() sort(ar.begin(), ar.end(), greater<>);

//g++ -o test -std=c++17 a.cpp

vector<int> ar;
int n, winmax=0, aux=0;

int pd(int index){
	int next=index+1;
	bool first=true;
	for(int i = index; i < ar.size(); i++){
		aux += ar[i];
		
		if(aux > winmax){
			winmax = aux;
		}
		
		if(ar[i] < 0 && first){
			if(i+1 <= ar.size())
			next = i+1;
			
			first = false;
		}
		
		
		if(aux <= 0)
			break;	
	}
	
	//cout << "AUX::: " << aux << endl;

	aux = 0;
	
	return next;	
}

int main(){
	int n;
	
	while(cin >> n && n){
		bool flag=false;
		
		for(int i = 0; i < n; i++){
			int ent;
			scanf("%d", &ent);
			
			if(ent > 0)
				flag = true;
				
			if(flag){
				ar.pb(ent);
			} else 
				continue;
		}
		
		if(!flag){
			printf("Losing streak.\n");
			continue;
		}
	
		for(int i = 0; i < ar.size(); i++){
			//cout << ""; //WTF
			if(ar[i] > 0){
				i = pd(i);
			} else 
				continue;
		}
		
		printf("The maximum winning streak is %d.\n", winmax);
		
		winmax = 0;
		ar.clear();	
	}	
	
	return 0;
}
