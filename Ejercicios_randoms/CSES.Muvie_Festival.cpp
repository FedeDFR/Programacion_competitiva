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
    ll t, res = 0;
    cin >> t;
    vector<ii> v;

    while(t--){
        ll a, b; cin >> a >> b;
        v.pb({b,a});
    }

    sort(v.begin(), v.end());

    ii termina  {0,0};
    for (auto i:v) {
        if (termina.first < i.first && termina.first <= i.second) {
            termina.first = i.first;
            termina.second = i.second;
            res++;
        }
    }
    
    cout << res << "\n";
}