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
//vector<int> ar;


inline void print(vector<int> ar, int size){
  for(int i = 0; i < size; i++){
    cout << ar[i];
  }
  cout << endl;
}

inline void move(int ar[], int pos, int dist){

}

int main(){
  int ntest;

  cin >> ntest;

  while(ntest--){
    int n, h;

    cin >> n >> h;

    vector<int> array;

    for(int i = 0; i < n; i++){
      if(i < abs(h-n))
        array.pb(0);
      else
        array.pb(1);
    }

    do {
      print(array, array.size());
    } while(next_permutation(array.begin(), array.end()));

    if(ntest > 0)
    cout << endl;
  }

	return 0;
}
