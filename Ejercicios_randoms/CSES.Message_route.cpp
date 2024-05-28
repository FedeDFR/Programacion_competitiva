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

void dfs(ll nodoQueVeo, vector<vector<ll>> &Grafo, vector<bool> &Vistado, ll &k, vector<ll> &vec) {
    Vistado[nodoQueVeo] = true;
    

    for(ll u :Grafo[nodoQueVeo]) {
        if(!Vistado[u]) {
            dfs(u, Grafo, Vistado, k, vec);
        }
        k++;
        vec.pb(u);
    }
}

int main () {
    REGALO;
    ll n, m; cin >> n >> m;
    vector<vector<ll>> g;
    vector<bool> Visitado(n, false);
    vector<ll> vec;

    fore(i,0,m) {
        ll x, y; cin >> x >> y;
        x--;
        y--;
        g[x].push_back(y);
        g[y].push_back(x);
    }

    ll k = 0;
    dfs(0, g, Visitado, k, vec);

    if (!Visitado.empty()) {
        cout << k << "\n";
        for (auto i: vec) {
            cout << i << " ";
        }
    } else {
        cout << "IMPOSSIBLE\n";
    }
    
}
