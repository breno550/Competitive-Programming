#include <bits/stdc++.h>
using namespace std;

int solve2(char _tempo[]){
	int result = 0;
	
	result+=((int)_tempo[6] - '0') * 60 * 10;
	result+=((int)_tempo[7] - '0') * 60;
	result+=((int)_tempo[9] - '0') * 10;
	result+=((int)_tempo[10] - '0');
	
	return result;
}

int solve(char _tempo[]){
	int result = 0;
	
	result+=((int)_tempo[0] - '0') * 60 * 10;
	result+=((int)_tempo[1] - '0') * 60; 
	result+=((int)_tempo[3] - '0') * 10;
	result+=((int)_tempo[4] - '0');
	
	return result;
}

int main(){
	int sch;
	int day=1;
	
	while(cin >> sch){
		vector<string> str1;
		vector<int>ocup;
		int best_hora=0;
		int inter=0;
		cin.ignore();
		
				
		//carrega as strings
		for(int i = 0; i < sch ; i++){
			string obj;
			getline(cin, obj);
			str1.push_back(obj);
		}
		
		//separa hora das strings e calcula o tempo em minutos
		for(int i = 0; i < sch; i++){
			char tempo[255];
			size_t tempo_t = str1[i].copy(tempo, 11, 0);
			tempo[tempo_t]='\0';
			ocup.push_back(solve(tempo));
			ocup.push_back(solve2(tempo));
		}
		
		//organiza todos os horarios
		sort(ocup.begin(), ocup.begin() + ocup.size());
		for(int i = 0; i < ocup.size(); i++){
			cout << ocup[i] << endl;
		}
		
		//problema = datas dentro uma da outra bugam
		for(int i = 0 ; i < ocup.size(); i++){
			if(ocup[0] > 600 && inter < ocup[0] - 600){inter = ocup[0] - 600; best_hora = ocup[0];}
			if(ocup[ocup.size()-1] < 1080 && inter < 1080 - ocup[ocup.size()-1]){ inter = 1080 - ocup[ocup.size()-1]; best_hora = ocup[ocup.size()-1];}
			if(ocup[i] != ocup[i+1]){if(inter < ocup[i+1] - ocup[i] && i+1 < ocup.size()){ inter = ocup[i+1] - ocup[i]; best_hora = ocup[i+1];}	
		}
		}
		/*for(int i = 0; i < ocup.size(); i+=2){
			if(ocup[i+1] == ocup[i+2]){ continue;}
			if(ocup[i+1] != ocup[i+2]){ 
				if(inter < ocup[i+2] - ocup[i+1] && i+2 < ocup.size()){ inter = ocup[i+2] - ocup[i+1]; best_hora = ocup[i+1];}	
			}
		}
		
		for(int i = 0; i < ocup.size(); i+=2){
			if(ocup[0] > 600 && inter < (ocup[0] - 600)){ inter = ocup[0] - 600; best_hora = 600;}
			if(ocup[ocup.size()-1] < 1080 && inter < (1080 - ocup[ocup.size()-1])){ inter = 1080 - ocup[ocup.size()-1]; best_hora = ocup[ocup.size()-1];}
		}*/
		
		/*cout << "Day #" << day << ": the longest nap starts at " << best_hora/60 << ":"; 
		if(best_hora%60==0 || best_hora%60 <= 9){cout << "0" << best_hora%60 << " and will last for ";}
		else{cout << best_hora%60 << " and will last for ";}
		if(inter >= 60){cout << inter/60 << " hours and " << inter%60 << " minutes." << endl;}
		else { cout << inter << " minutes." << endl;}
		
		day++;*/
		
		if (inter >= 60)
            printf("Day #%d: the longest nap starts at %d:%02d and will last for %d hours and %d minutes.\n", 
                day++, best_hora / 60, best_hora % 60, inter / 60, inter % 60);
        else
            printf("Day #%d: the longest nap starts at %d:%02d and will last for %d minutes.\n", 
                day++, best_hora / 60, best_hora % 60, inter);
		
	}
	
	return 0;
}
