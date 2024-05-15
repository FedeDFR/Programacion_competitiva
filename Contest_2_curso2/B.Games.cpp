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
    ll n, res = 0;
    cin >> n;
    vector<ii> v;

    while(n--){
        ll a, b; cin >> a >> b;
        v.pb({a,b});
    }

    sort(v.begin(), v.end());

    for (auto i:v) {
        ii local = i;
        for (auto j:v) {
            ii visitante = j;
            if (local.first == visitante.second) {
                res++;
            }
        }   
    }
    
    cout << res << "\n";
}