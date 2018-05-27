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
vector<int> pos;
vector<int> pos2;
int mov1, mov2;

int mover(int index){
  if(index == pos.size()) return;

  if(pos[index] + 1 < pos[index+1]){
    pos[index]++;
    mov1++;
    index++;
    mover(index);
  } else {
    mover(index + 1);
  }

  return 0;
}
int mover2(){

}

int main(){
  int n;

  cin >> n;

  vector<int> pos;

  int ent;

  int conto = 0, conte = 0;

  for(int i = 0; i < n / 2; i++){
    cin >> ent;
    pos.pb(ent);

    if(ent & 1)
      conto++;
    else
      conte++;
  }

  pos2 = pos;

  int od=0, eve=0;

  mover(0);
  mover(0)

  cout << mov << endl;
	return 0;
}
