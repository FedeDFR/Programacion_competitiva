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
    ll t, res = 0;
    cin >> t;

    while(t--){
        ll a, b, n; cin >> a >> b >> n;
        ll aOrb;

        if (a < b) {
            aOrb = 0;
        } else {
            aOrb = 1;
        }

        while (a <= n || b <= n) {
            if (aOrb) {
                b = b + a;
                res++;
            } else {
                a = a + b;
                res++;
            }
        }
        
        cout << res << "\n";
    }

}
