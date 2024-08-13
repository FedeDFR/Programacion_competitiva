#include <bits/stdc++.h>
#include <algorithm>
#define fore(i,a,b) for(int i=a;i<b;i++)
#define pb push_back
#define sz(x) ((int)x.size())
#define fst first
#define snd second 
#define all(x) x.begin(),x.end()
#define imp(v) {for(auto gdljh:v)cout<<gdljh<<" "; cout<<"\n";}
#define NICO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;
typedef long long ll;
typedef pair<int,int> ii;
const ll MOD=1e9+7;

vector<bool> vis(100005,false);
int menor;
int c[100005];

void bfs(ll v, vector<vector<ll>> &g) {
    queue<ll> q;
    q.push(v);
    vis[v] = true;
    menor = min(menor, c[v]);

    while (!q.empty()) {
        v = q.front();
        q.pop();
        for (ll u : g[v]) {
            if (!vis[u]) {
                vis[u] = true;
                menor = min(menor, c[u]);
                //cout << c[v] << " " << c[u] << "bfs\n";
                q.push(u);
            }
        }
    }
}

int main () {
    NICO;
    ll n, m; cin >> n >> m;
    fore(i,0,n) cin >> c[i];

    vector<vector<ll>> v (100005);
    fore(i,0,m) {
        ll a, b; cin >> a >> b;
        v[a-1].pb(b-1);
        v[b-1].pb(a-1);
    }

    ll res = 0;
    fore(i,0,n) {
        if(!vis[i]) {
            menor = 10005;
            bfs(i,v);
            //cout << menor << "ss\n";
            res += menor;
        }
    }
    
    cout << res << "\n";

}
