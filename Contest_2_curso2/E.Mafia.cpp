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

bool hayRondas(ll a[], ll n, ll m) {
    ll acc = 0;
    fore(i,0,n) {
        if (m < a[i]) {
            return 0;
            break;
        } else {
            acc += m - a[i];
        }
    }

    if (acc >= m) {
        return 1;    
    } else {
        return 0;
    }
}
int main () {
    REGALO;
    ll n;
    cin >> n;
    ll a[n];

    fore(i,0,n){
        cin >> a[i] ;
    }

    sort(a, a+n);
    
    ll l = 0, r = 1e10;
    ll m;
    
    while (l <= r) {
        m = (l + r)/2;

        if (hayRondas(a,n,m)) {
            r = m - 1;
        } else {
            l = m + 1;
        }
    }
    
    l+=2;
    while(hayRondas(a,n,l)){
        l--;
    }
    l++;
    cout << l << "\n";

}
