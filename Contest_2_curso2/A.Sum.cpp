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
        ll auxa, auxb, auxc, num;
        ll a, b, c; cin >> a >> b >> c;
        num = a+b;
        if (num == c) {
            auxa = 1;
        } else {
            auxa = 0;
        }
        num = b+c;
        if (num == a) {
            auxb = 1;
        } else {
            auxb = 0;
        }
        num = c+a;
        if (num == b) {
            auxc = 1;
        } else {
            auxc = 0;
        }

        if ((auxa == 1) || (auxb == 1) || (auxc == 1)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
        
    }
}
