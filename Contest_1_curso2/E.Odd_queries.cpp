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
        ll n, q; cin >> n >> q;
        ll a[n];
        ll sum[n+1];
 
        fore(i,0,n) {
            cin >> a[i];
        }
 
        sum[0] = 0;
        fore(i,0,n)
            sum[i+1] = sum[i] + a[i];
        
 
        fore(i,0,q) {
 
            ll l, r, k; cin >> l >> r >> k;
            l--;
            r--;
            ll res = sum[l] + ((r-l+1)* k) + (sum[n]-sum[r+1]);
            
            if (res%2 == 0) {
                cout << "NO \n";
            } else {
                cout << "YES \n";
            }            
        }
    }
}