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
    ll n;
    cin >> n;
    ll a[n], dp[n];
    
    fore(i,0,n){
        cin >> a[i];
    }

    dp[n-1] = 0;
    dp[n-2] = abs(a[n-1]-a[n-2]);
    
    ll i = n-3;
    if(n > 2) {
        while (i >= 0) {
            ll s1, s2;

            s1 = abs(a[i]-a[i+1]);
            s2 = abs(a[i]-a[i+2]);
            
            dp[i] = min(s1 + dp[i+1], s2 + dp[i+2]);
            i--;
        }
    }
    cout << dp[0] << "\n";
}
