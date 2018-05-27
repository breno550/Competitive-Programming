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

struct jogador{
  string name;
  int ataque;
  int defesa;
}player[10];

bool comp_atk(jogador a, jogador b){ return a.ataque > b.ataque; }

bool comp_def(jogador a, jogador b){ return a.defesa > b.defesa; }

bool comp_name(jogador a, jogador b){ return a.name < b.name; }

//make
void troca(int a, int b){
  //cout << player[a].name << " " << player[b].name << endl;
  string aux;
  aux = player[a].name;
  player[a].name = player[b].name;
  player[b].name = aux;

  int aux1;
  aux1 = player[a].defesa;
  player[a].defesa = player[b].defesa;
  player[b].defesa = aux1;
  //cout << player[a].name << " " << player[b].name << endl;

}

int main(){
  int test = 1, testn;

  cin >> testn;

  while(testn--){
    cout << "Case " << test << ":" << endl;
    test++;

    for(int i = 0; i < 10; i++){
      char name[999];
      int atk, def;
      cin >> name;
      cin >> atk >> def;

      player[i].name = name;
      player[i].ataque = atk;
      player[i].defesa = def;
    }

    sort(player, player + 10, comp_atk);

    //ver se tem algum player com atq == e defesa menor
    if(player[4].ataque == player[5].ataque){
      int menor = player[4].defesa;
      int id = 4;

      for(int i = 5; i < 10; i++){
        if(player[id].ataque == player[i].ataque){
          int aux = player[i].defesa;
          if(menor > aux){
            //cout << player[id].name << " " << player[i].name << endl;
            troca(id, i);
            cout << player[id].name << " " << player[i].name << endl;
            id = i;
            menor = aux;
          }
        } else {
          break;
        }
      }
    }

    sort(player, player + 5, comp_name);

    cout << "(";
    for(int i = 0; i < 5; i++){
      if(i != 4)
        cout << player[i].name << ", ";
      else
        cout << player[i].name << ")" << endl;
    }



  }
	return 0;
}
