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

int main(){
 	int n, l;
  double w;

  FAST();

	while(cin >> n >> l >> w){
    vector<pair<double, double>> ar;
    w /= 2.0;

  	for(int i = 0; i < n; ++i){
			int pos, raio;
			cin >> pos >> raio;

      if(raio > w){
        double range = sqrt((double)raio*raio - w*w);
        double a = pos - range;
        double b = pos + range;
        ar.pb(make_pair(a, b));
      }
		}

    sort_ar();

    int ans = 0;
    double index = 0;

    for(int i = 0; index < l; i++){
      bool flag = false;
      double r_max = index;
      for(int j = 0; j < ar.size(); j++){
        if(ar[j].first > index) break;

        if(ar[j].second > r_max){
          r_max = ar[j].second;
          flag = true;
        }
      }

      index = r_max;

      if(flag){
        ans++;
      } else {
        break;
      }
    }

    if(index >= l)
      cout << ans << endl;
    else
      cout << "-1" << endl;
    }

	return 0;
}
