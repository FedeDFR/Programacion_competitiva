#include <bits/stdc++.h>
#define fore(i,a,b) for(int i=a;i<b;i++)
#define pb push_back
#define sz(x) (ll)x.size()
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
    
    while(t--){
      ll n; cin >> n;
      vector<pair<ll, pair<ll, ll>>> lista(n);

      fore(i,0,n) {
        ll a, b; cin >> a >> b;
        if(a <= 10) {
          lista.pb({b,{a,i+1}});
        }
      }

      sort(lista.begin(), lista.end());
      pair<ll, pair<ll, ll>> res = lista.back();
      cout << res.snd.snd << "\n"; 
    }
}