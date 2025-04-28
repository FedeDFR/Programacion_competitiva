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

    vector<ll> a(n,0);
    ll s = n, t = n-1;
    if (n%2 == 0) {
        t = n;
        s = n-1;
    }
    if(n > 3 || n == 1) {
        fore(i,0,n) {
            if(s > 0){
                a[i] = s;
                s = s - 2;
            } else {
                a[i] = t;
                t = t - 2;
            }
        }

        fore(i,0,n) cout << a[i] << " ";

    } else {
        cout << "NO SOLUTION";
    }
}
