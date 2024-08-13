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

ll n;
ll a[300005];
ll dp[300005];

ll f(ll pos) {
    if(pos > n) {
        return 1e7;
    } else if (pos == n) {
        return 0;
    }

    if(dp[pos] != -1) {
        return dp[pos];
    } else {
        dp[pos] = min(f(pos+a[pos]+1), 1+f(pos+1));
        return dp[pos];
    }


}

int main () {
    REGALO;
    ll t;
    cin >> t;
    
    while(t--){
        cin >> n;

        fore(i,0,300005) {
            dp[i] = -1;
        }

        fore(i,0,n) {
            cin >> a[i];
        }

        cout << f(0) << "\n";
    }
}