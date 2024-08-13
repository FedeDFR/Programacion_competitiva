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
        ll a; cin >> a;
        ll j, s = 0, res2 = 0, maxant = 0;

        fore(x,2,a+1) {
            j = 1;
            res2 = 0;
            while (x*j <= a) {
                res2 = res2 + x*j;
                j++;
            }
            if (res2 >= maxant) {
                s = x;
                maxant = res2;
            }
        }
        
        cout << s << "\n";
    }

}