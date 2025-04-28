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
    vector<ll> a, b;
    ll gau = ((n * (n+1))/2)/2;
    ll sum_a = 0, sum_b = 0, res = 1, i = n;
 
    while (i > 0) {
        if(sum_a+i <= gau) {
            a.pb(i);
            sum_a += i;
        } else {
            b.pb(i);
            sum_b += i;
        }
        if(sum_b > gau || sum_a > gau) {
            res = 0;
            break;
        }
        i--;
    }
 
    if(res) {
        cout << "YES" << "\n";
        cout << sz(a) << "\n";
        fore(i,0,sz(a)){
            cout << a[i] << " ";    //imprime los elementos del arreglo
        }
        cout << "\n";
        cout << sz(b) << "\n";
        fore(i,0,sz(b)){
            cout << b[i] << " ";    //imprime los elementos del arreglo
        }
    } else {
        cout << "NO";
    }
}