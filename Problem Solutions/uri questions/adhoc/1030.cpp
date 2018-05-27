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

int main(){
  int nc;

  cin >> nc;

  int test = 1;

  while(nc--){
    cout << "Case " << test << ": ";
    test++;

    int n, k;
    cin >> n >> k;

    vector<int> ar;

    for(int i = 1; i <= n; i++){
      ar.pb(i);
    }

    for(int i = 0; ar.size() > 1; i = (i + k) % ar.size()){
      if(ar.size() == 1) break;

      if(i > 0)
      ar.erase(ar.begin() + i - 1);
      else
      ar.pop_back();
    }

    cout << ar[0] << endl;
  }
	return 0;
}
