#include <bits/stdc++.h>
#define fore(i,a,b) for(int i=a;i<b;i++)
#define pb push_back
#define sz(x) ((int)x.size())
#define fst first
#define snd second 
#define all(x) x.begin(),x.end()
#define imp(v) {for(auto gdljh:v)cout<<gdljh<<" "; cout<<"\n";}
#define NICO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;
typedef long long ll;
typedef pair<int,int> ii;
const ll MOD=1e9+7; // o 1e9+7

ll n, w, f, s[10005];
vector<ll> dp(10005,-1);

ll fx(ll contw, ll contf, ll i, ll time) {
    if(i == n) return 0;
    else {
        if(dp[i] != -1) return dp[i];
        else {
            ll wata = (contw-s[i]+1)/w;
            ll fire = (contf-s[i]+1)/f;
            if(wata > fire) {}
            
        }
    }
}

int main () {
    NICO;
    ll t; cin >> t;
    while(t--) {
        cin >> w >> f >> n;
        fore(i,0,n) cin >> s[i];
        sort(s, s+n);

        ll contw = 0, contf = 0, time = 0;
    }
}
