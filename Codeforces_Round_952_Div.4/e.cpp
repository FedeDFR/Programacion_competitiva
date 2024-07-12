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
        ll h, n; cin >> h >> n;
        ll a[n], c[n], l[n], minC = 10e9;
        fore(i,0,n) {
            cin >> a[i];
        }

        fore(i,0,n) {
            cin >> c[i];
            l[i] = 0;
        }

        while (h <= 0) {
            fore(i,0,n) {
                if (l[i] = 0) {
                    h -= a[i];
                    l[i] = c[i];
                }
                if (minC > l[i]) {
                    minC = l[i];
                }
            }
        }
        
    }
}