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

ll dp[3][200005];
ll re3[3];

ll d3(ll x, ll r) {
    return ((x+((3-r)%3))/3);
}

ll f(ll x, ll r) {
    if(x == 0 && r == 0) return 1;
    else if (x == 0 && (r == 1 || r == 2)) return 0;

    if(dp[r][x] != -1) {
        return dp[r][x];
    }  else { 
        dp[r][x] = (re3[0]*f(x-1,r) + re3[1]*f(x-1,(r+1)%3) + re3[2]*f(x-1,(r+2)%3))%MOD;
        return dp[r][x];
    }
}

int main () {
    NICO;
    ll n, l, r; cin >> n >> l >> r;
    
    re3[0] = d3(r,0)-d3(l-1,0);
    re3[1] = d3(r,1)-d3(l-1,1);
    re3[2] = d3(r,2)-d3(l-1,2);

    fore(i,0,200005) dp[0][i] = -1;
    fore(i,0,200005) dp[1][i] = -1;
    fore(i,0,200005) dp[2][i] = -1;

    cout << f(n,0) << "\n";
}