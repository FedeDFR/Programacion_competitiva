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

bool decrece(ll a, ll b) {
    return a < b;
}

int main () {
    REGALO;
    ll q;
    cin >> q;
    
    while(q--){
        ll n; cin >> n;
        ll arr[n];
        fore(i,0,n) {
            cin >> arr[i];
        }
        ll a, x; cin >> a >> x;
        ll b, y; cin >> b >> y;
        ll k; cin >> k;

        sort(arr, arr + n, decrece);
        ll l = 0, r = 1e10;

    }
}