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
const ll MOD=1e9+7; // o 1e9+7

ll deep = 1;
vector<ll> prof(205, 0);

void bfs(ll v, vector<vector<ll>> &g,vector<ll> &prof) {
    vector<bool> vis(sz(g),false);
    queue<ll> q;
    prof[v] = 1;
    vis[v] = true;
    q.push(v);
    
    while (!q.empty()) {
        v = q.front();
        q.pop();
        for (ll u : g[v]) {
            if (!vis[u]) {
                vis[u] = true;
                prof[u]=prof[v]+1;
                //a.push_back(u);
                q.push(u);
            }
        }
    }
}

int main () {
    NICO;
    ll n, count = 0; cin >> n;
    vector<vector<ll>> v (205);
    map<vector<char>,ll> pers;
    set<vector<char>> sett;
    
    fore(i,0,n) {
        vector<char> v1, v2;
        string st1, trash, st2; cin >> st1 >> trash >> st2;
        for (char c : st1) {
            if (c >= 'A' && c <= 'Z') {
                v1.pb(c+'a'-'A');
            } else {
                v1.pb(c);
            }
        }
        for (char c : st2) {
            if (c >= 'A' && c <= 'Z') {
                v2.pb(c+'a'-'A');
            } else {
                v2.pb(c);
            }
        }

        if(!sett.count(v2)) {
            sett.insert(v2);
            pers[v2] = count;
            count++;
        }
        if(!sett.count(v1)) {
            sett.insert(v1);
            pers[v1] = count;
            count++;
        }

        v[pers[v2]].pb(pers[v1]);
    }

    bfs(0,v,prof);
    sort(prof.begin(), prof.end());

    cout << prof[prof.size()-1] << "\n";
}
