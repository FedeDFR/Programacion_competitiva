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
        ll x, y; cin >> x >> y;

        if (x < 0) {
            x = -x;
        }

        if(y+x+1 < x) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
        
    }
}