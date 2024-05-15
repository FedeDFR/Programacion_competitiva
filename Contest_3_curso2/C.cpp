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
    ll a[n], b[n], aux, res = 0;

    fore(i,0,n) {
        cin >> a[i];
    }

    fore(i,0,n) {
        cin >> b[i];
    }

    if (a[0] < b[0]) {
        res = b[0];
        aux = b[0];
    } else {
        res = a[0];
        aux = a[0];
    }

    ll i = 1;
    while(i < n) {
        if ((a[i+1]+b[i]) >= b[i+1] && aux == a[i-1]) {
            res = res + b[i];
            aux = b[i];
            i++;
        } else if ((a[i+1]+b[i]) < b[i+1] && aux == a[i-1]) {
            res = res + b[i+1];
            aux = b[i+1];
            i = i + 2;
        } else if ((b[i+1]+a[i]) >= a[i+1] && aux == b[i-1]) {
            res = res + a[i];
            aux = a[i];
            i++;
        } else if ((b[i+1]+a[i]) < a[i+1] && aux == b[i-1]) {
            res = res + a[i+1];
            aux = a[i+1];
            i = i + 2;
        } 
    }

   cout << res << "\n";
}