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
    ll z[26];
    
    while(t--){
        fore(i,0,26) {
        z[i] = 0;
        }
        ll n, res = 0; cin >> n;
        string a; cin >> a;

        fore(i,0,n) {
            int aux = a[i]-65;
            if (z[aux] != 0) {
                res++;
            } else {
                res = res + 2;
                z[aux] = 1;
            }
        }
        
        cout << res << "\n";
    }
}