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

bool bins(ll arr[],ll n, ll tomo, ll a, ll x, ll b, ll y, ll k) {
    vector<ll> v;
    ll j = 0;
    while(j < n && j < tomo) {
        v.pb(arr[j]);
        j++;
    }

    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());

    ll mulab = tomo/lcm(a,b), i = 0, res = 0;
    //cout << mulab << " " << a << " " << b << "fede\n";
    while(mulab > 0 && i < n) {
        res += (arr[i]*(x+y))/100;
        mulab--;
        //cout << (arr[i]*(x+y))/100 << "a+b\n";
        i++;
    }

    if (a > b) {
        ll aaux = (tomo/a)-tomo/lcm(a,b);
        while(aaux > 0 && i < n) {
            res += (arr[i]*x)/100;
            aaux--;
            i++;
        }

        ll baux = (tomo/b)-tomo/lcm(a,b);
        while(baux > 0 && i < n) {
            res += (arr[i]*y)/100;
            baux--;
            i++;
        }
        cout << res << "q\n";
        return res > k;
    } else {
        ll baux = (tomo/b)-tomo/lcm(a,b);
        while(baux > 0 && i < n) {
            res += (arr[i]*y)/100;
            baux--;
            //cout << (arr[i]*y)/100 << "b\n";
            i++;
        }

        ll aaux = (tomo/a)-tomo/lcm(a,b);
        while(aaux > 0 && i < n) {
            res += (arr[i]*x)/100;
            aaux--;
            //cout << (arr[i]*x)/100 << "a\n";
            i++;
        }
        cout << res << "test\n";
        return res >= k;
    }

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
        ll a, x; cin >> x >> a;
        ll b, y; cin >> y >> b;
        ll k; cin >> k;

        sort(arr, arr+n);
        reverse(arr, arr+n);

        ll l = 0, r = n, m;
        while(l<=r){
            m=(l+r)/2;
 
            if(!bins(arr,n,m,a,x,b,y,k)){
                l=m+1;
            } else {    
                r=m-1;
            }
        }

        if(bins(arr,n,l,a,x,b,y,k)) {
            cout << l << "\n";
        } else {
            cout << -1 << "\n";
        }
    }
}