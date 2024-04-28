#include <bits/stdc++.h>
#define fore(i,a,b) for(int i=a;i<b;i++)
#define pb push_back
#define sz(x) (int)x.size()
#define fst first
#define snd second 
#define all(x) x.begin(),x.end()
#define REGALO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;
typedef long long ll;
typedef pair<int,int> ii;


int main () {
    REGALO;
    ll t;
    cin >> t;
    vector <pair<string, string>> v;

    fore(i,0,t) {
      string a, b; cin >> a >> b;
      pair <string, string> x = {a,b};
      int z = 1;
      for (auto i:v) {
        if(i == x) {
          z = 0;
        }
      }
      if (z == 1) {
        v.pb(x);
      }
    }
    ll r = 0;
    for(auto i:v) {
      r++;
    }

    cout << r << "\n";
}