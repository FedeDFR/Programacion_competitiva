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
        ll n, m; cin >> n >> m;
        ll cant, cantfilamax = 0, filamax = 0, ult = 0, pri = 0;
        string str[n];
        fore(i,0,n) {
            cin >> str[i];
            cant = 0;
            fore(j,0,m) {
                if (str[i][j] == '#') {
                    ult = j;
                    cant++;
                    if (cant == 1) {
                        pri = j;
                    }  
                } 
            }

            if (cantfilamax < cant) {
                filamax = i;
                cantfilamax = cant;
            }
        }

        cout << filamax+1 << " " << ((pri+ult)/2)+1 << "\n";
    }
}