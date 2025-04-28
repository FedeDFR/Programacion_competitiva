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
    ll a[n-1];
    fore(i,0,n-1) {
        cin >> a[i];
    }

    sort(a, a+n);
    if(n != 2) { 
        fore(i,0,n-1) {
            if(a[i+1]-a[i] == 2) {
                cout << a[i]+1; 
                break;
            }
            if(i == n-2) {
                cout << a[i]+1;
            }
        }
    } else {
        if(a[0] == 1) {
            cout << 2;
        } else {
            cout << 1;
        }
    }
}
