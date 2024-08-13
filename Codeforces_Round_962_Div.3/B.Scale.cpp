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
const ll MOD=1e9+7; // o 1e9+7


int main () {
    NICO;
    ll t; cin >> t;
    while(t--) {
        ll n, k; cin >> n >> k;
        vector<string> a;
        fore(i,0,n) {
            string s; cin >> s;
            a.pb(s);
        }

        vector<vector<char>> res(n);
        ll ik = 0, jk = 0, i = 0, j = 0;
        while(i < n) {
            string s = a[i];
            j = 0;
            while(j < n) {
                res[ik].pb(s[j]);
                j+=k;
            }
            ik++;
            i+=k;
        }

        fore(i,0,n/k) {
            fore(j,0,n/k) {
                cout << res[i][j];
            }
            cout << "\n";
        }
    }
}