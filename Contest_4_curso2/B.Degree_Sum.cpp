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
    ll n, m; cin >> n >> m;
    vector<vector<ll>> g(n);
    ll res = 0;

    fore(i,0,m) {
      ll x, y; cin >> x >> y;
      x--;
      y--;
      g[x].pb(y);
      g[y].pb(x);
    }

    fore(i,0,n) {
      res += g[i].size();
    }

    cout << res << "\n";
}