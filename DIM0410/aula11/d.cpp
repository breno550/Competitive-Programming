#include <bits/stdc++.h>
using namespace std;

#define pb push_back

#define sort_ar() sort(ar.begin(), ar.end());
#define sort_ar_inv() sort(ar.begin(), ar.end(), greater<>);

vector<pair<double, double>> ar;

int main(){
 	double n, l, w;

	while(cin >> n >> l >> w){
		for(int i = 0; i < n; ++i){
			int pos, raio;
			cin >> pos >> raio;

      w /= 2.0;

      if(raio > w){
        double range = sqrt((double)raio*raio - w*w);
        double a = pos - range;
        double b = pos + range;
        ar.pb(make_pair(a, b));
      }
		}

		sort_ar();
		//sort(ar.begin() + 1, ar.end());

		double index = 0, vis = 0;
		int ans = 0, last = 0;
		int i = 0;
		while(vis < l){
			bool test = false;
			double aux = index;

			//vector<pair<double, double>>::iterator it = ar.begin();
			//int test = 0;
			for(; i < ar.size(); ++i){
					//cout << ar[i].first << " " << ar[i].second << endl;
					if(ar[i].first > index){
						break;
					}

					if(ar[i].second >= aux){
						aux = ar[i].second;
						test = true;
					}
				}

				if(test == false)
					break;

				++ans;
				vis = index = aux;
			}

			//cout << "vis " << vis << endl;
			if(vis < l)
				cout << "-1" << endl;
			else
				cout << ans << endl;
		}

	return 0;
}
