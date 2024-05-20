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
    ll t;
    cin >> t;
    
    while(t--){
        ll n; cin >> n;
        set<ll> st; ll res = 0;
        fore(i,0,n) {
            ll as;
            cin >> as;
            st.insert(as);
        }
        
        vector<ll> vec;
        for (auto i: st) {
            vec.pb(i);    
        }

        ll l = 0, r = 0;
        while (l < vec.size() && r < vec.size()) {
            if ((vec[r] - vec[l]) <= (n - 1)) {
                r++;
            } else {
                l++;
                //cout << r << l << "\n";
                res = max(res, r-l+1);
            } 
        }
        //cout << r << l << vec.size() << "\n";
        res = max(res, r-l);
    
        cout << res << "\n";
    }
}