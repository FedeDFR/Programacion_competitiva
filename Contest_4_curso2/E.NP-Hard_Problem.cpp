#include <bits/stdc++.h>
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

vector<ll> color(100005);
vector<bool> vis(100005, -1);
ll pintu = 0;
bool bipartito = true;

void bfs(ll v, vector<vector<ll>> &g) {
    vector<bool> vis(sz(g),false);
    queue<ll> q;
    vis[v] = true;
    q.push(v);
    
    while (!q.empty()) {
        v = q.front();
        q.pop();
        for (ll u : g[v]) {
            if (!vis[u]) {
                vis[u] = true;
                q.push(u);

                color[u] = color[v]+1;
                pintu++;
            } else {
                if(pintu%2 != color[u]%2) {
                    bipartito = false;
                    break;
                }
            }
        }
    }
}


int main () {
    NICO;
    ll n, m; cin >> n >> m;
    vector<vector<ll>> v(100005);

    fore(i,0,m) {
        ll a, b; cin >> a >> b;
        v[a].pb(b);
        v[b].pb(a);
    }



}
