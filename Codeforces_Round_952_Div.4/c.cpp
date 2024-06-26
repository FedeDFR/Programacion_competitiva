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
        vector<ll> v;
        ll n; cin >> n;
        fore(i,0,n) {
            ll x; cin >> x;
            v.pb(x);
        }

        sort(v.begin(), v.end());
        ll sum[n+1];
        sum[0] = 0;
        fore(i,0,n) {
            sum[i+1] = sum[i] + v[i];
        }

        fore(i,0,n) {

        }
    }
}