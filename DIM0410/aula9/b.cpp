#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, naux=0, leaks=0, dif=0;
	double consu=0, total=0, gasmax=0;
	
	while(cin >> n){
		string event; 
		string resto;
		dif = abs(naux-n);
		//cin.ignore();
		cin >> event;
		
		//cout << event << endl;
		//goal
		if(event[0] == 'G' && event[1] == 'o'){
			total += (dif * leaks) + (dif * (consu / 100));
			if(gasmax < total) gasmax = total;
			//cout << "n " << n << " Consumo: " << consu << " dif: " << dif << " leaks " << leaks << " total: " << total << " gasmax: " << gasmax << endl;	
			cout << std::fixed;
			cout << setprecision(3) << gasmax << endl;
			
			total = 0;
			gasmax = 0;
			leaks = 0;
			consu = 0;
			dif = 0;
			naux = 0;
			n = 0;
		} else	 
		//fuel
		if(event[0] == 'F'){
			cin.ignore();
			cin >> resto;
			//caso tenha leak adiciona 1L * leaks por km
			total += (dif * leaks) + (dif * (consu / 100));
			//cin.ignore();
			cin >> consu;
			
			if(n == 0 && consu == 0) break;	
		} else			
		//leak
		if(event[0] == 'L'){
			total += (dif * leaks) + (dif * (consu / 100));
			leaks++;
		} else			
		//mechanic
		if(event[0] == 'M'){
			//cout << event << resto <<endl;
			total += (dif * leaks) + (dif * (consu / 100));
			leaks = 0;
		} else		
		//gas
		if(event[0] == 'G' && event[1] == 'a'){
			cin.ignore();
			cin >> resto;
			total += (dif * leaks) + (dif * (consu / 100));
			
			if(gasmax < total) gasmax = total;
			total = 0;
		}
		//cout << "n " << n << " Consumo: " << consu << " dif: " << dif << " leaks " << leaks << " total: " << total << " gasmax: " << gasmax << endl;		
		naux = n;
	}
	
	return 0;
}
