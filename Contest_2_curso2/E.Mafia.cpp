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
    ll a[n];

    fore(i,0,n){
        cin >> a[i] ;
    }

    sort(a, a+n);

    cout << (a[n-1]+1) << "\n";

}
