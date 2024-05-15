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
        ll n, res = 0; cin >> n;
        char a[n];
        fore(i,0,n) {
            cin >> a[i];
        }

        ll b[10];

        ll l = 0, r = n;

        if (n > 100) {
            r = 100;
        } else {
            r = n;
        }
        

        while (l < r) {

            fore(i,0,10) {
                    b[i] = 0;
                }
        
            fore (i,l,r) {
                
                if (a[i] == '0') {
                    b[0]++;
                } else if (a[i] == '1') {
                    b[1]++;
                } else if (a[i] == '2') {
                    b[2]++;
                } else if (a[i] == '3') {
                    b[3]++;
                } else if (a[i] == '4') {
                    b[4]++;
                } else if (a[i] == '5') {
                    b[5]++;
                } else if (a[i] == '6') {
                    b[6]++;
                } else if (a[i] == '7') {
                    b[7]++;
                } else if (a[i] == '8') {
                    b[8]++;
                } else if (a[i] == '9') {
                    b[9]++;
                }  
                
                ll maxApariciones = 0;
                ll cantCarcDist = 0;
                fore(t,0,10) { 
                    if (maxApariciones < b[t]) {
                        maxApariciones = b[t];
                    }
                    if (b[t] != 0) {
                        cantCarcDist++;
                    }
                }

                if (maxApariciones <= cantCarcDist) {
                    res++;
                }
                
            }
            l++;

            if (r != n) {
                r++;
            }
            
        }

        cout << res << "\n";
    
    }
    
}