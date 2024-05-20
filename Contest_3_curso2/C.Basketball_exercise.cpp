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

ll f(ll pos, int fila, ll ) {
    ll res;
    res = max(f(pos+1, 1-fila, a) + a[fila][pos], f(pos+1, fila, a));
}


int main () {
    REGALO;
    ll n;
    cin >> n;
    ll a[2][n], aux, res = 0;
    ll dp[n];

    fore(i,0,n) {
        cin >> a[0][i];
        dp[i] = 0;
    }

    fore(i,0,n) {
        cin >> a[1][i];
    }
    ll pos = 0;
    ll fila = 0;
    fore(i,0,n) {
        res = max(a[fila][pos]

    }
    res = max(f(0,0,a), f(0,1,a));


    cout << res << "\n";
}