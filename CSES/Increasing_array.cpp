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
const ll MOD=1e9+7;


int main () {
    NICO;
    ll n; cin >> n;
    ll a[n];

    fore(i,0,n) cin >> a[i];

    ll r = 0;
    fore(i,0,n-1) {
       if(a[i] > a[i+1]) {
            r = r + a[i] - a[i+1];
            a[i+1] = a[i+1] + a[i] - a[i+1];
       }
    }

    cout << r;

}
