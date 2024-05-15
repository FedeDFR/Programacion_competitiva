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
    ll t;
    cin >> t;
    
    while(t--){
        ll n, c, res = 0; cin >> n >> c;
        ll orbitas[101];

        fore(i,0,101) {
            orbitas[i] = 0;
        }

        fore(i,0,n) {
            ll planeta; cin >> planeta;
            orbitas[planeta-1]++;
        }
        
        fore(i,0,101) {
            if (orbitas[i] < c && orbitas[i] > 0) {
                res += orbitas[i];
            } else if (orbitas[i] >= c && orbitas[i] > 0) {
                res += c;
            }
        }
        
        cout << res << "\n";       
    }
}