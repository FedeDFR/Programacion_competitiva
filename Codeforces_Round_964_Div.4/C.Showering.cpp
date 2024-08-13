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


int main () {
    NICO;
    ll t; cin >> t;
    while(t--) {
        ll n, s, m; cin >> n >> s >> m;
        vector<ii> v;

        fore(i,0,n) {
            ll a, b; cin >> a >> b;
            v.pb({a,b});
        }

        bool res = false;
        fore(i,0,n-1) {
            if(v[i+1].fst-v[i].snd >= s) {
                res = true;
                break;
            }
        }

        if(v[0].fst >= s) {
            res = true;
        }

        if(m-v[n-1].snd >= s) {
            res = true;
        }

        if(res) cout << "YES\n";
        else cout << "NO\n";
    }

}