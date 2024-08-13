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
        ll a1, a2, b1, b2; 
        cin >> a1 >> a2 >> b1 >> b2;

        ll res = 0;

        if(a1 > b1 && a2 > b2) res += 2;
        if(a1 > b2 && a2 > b1) res += 2;
        if(a1 == b1 && a2 > b2) res += 2;
        if(a1 == b2 && a2 > b1) res += 2;
        if(a2 == b1 && a1 > b2) res += 2;
        if(a2 == b2 && a1 > b1) res += 2;
        cout << res << "\n";
    }
}