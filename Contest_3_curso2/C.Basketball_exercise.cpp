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

ll a[2][100005];
ll dp[2][100005];

ll f(ll fila, ll pos, ll n) {
    if(pos == n) {
        return 0;
    } 

    if(dp[fila][pos] != -1) {
        return dp[fila][pos];
    } else {
        dp[fila][pos] = max(f(fila,pos+1,n), a[fila][pos] + f((fila+1)%2,pos+1,n));
        return dp[fila][pos];
    }
}


int main () {
    REGALO;
    ll n;
    cin >> n;

    fore(i,0,100005){
        dp[0][i]=-1;
        dp[1][i]=-1;
    }

    fore(i,0,n) {
        cin >> a[0][i];
    }
    
    fore(i,0,n) {
        cin >> a[1][i];
    }    

    ll res = max(f(0,0,n), f(1,0,n));

    cout << res << "\n";
}