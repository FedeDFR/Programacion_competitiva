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
        string st1, st2; cin >> st1 >> st2;
        ll cont = 0, j = 0;
        fore(i,0,sz(st1)) {
            if(st1[i] == '?' && j < sz(st2)) {
                st1[i] = st2[j];
                j++;
            } else if (st1[i] == '?' && j >= sz(st2)) {
                st1[i] = 'a';
            } else if (st1[i] == st2[j]) {
                j++;
            }
        }

        if(j == sz(st2)) {
            cout << "YES\n";
            fore(i,0,sz(st1)) {
                cout << st1[i];
            }
            cout << "\n";
        } else {
            cout << "NO\n";
        }
    }
}