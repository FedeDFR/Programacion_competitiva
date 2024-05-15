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
    ll n, k, res = 0;
    cin >> n >> k;
    ll a[n];

    fore(i,0,n) {
        cin >> a[i];
    }   

    ll l = 0, r = 1;

    ll sum = 0;
    sum = a[l];
    while (l < n) {
        if (sum < k) {
            sum = sum + a[r];
            r++;
        } else if (sum == k) {
            sum = sum - a[l];
            l++;
            res++;
        } else {
            sum = sum - a[l];
            l++;
        }
        
    }
    
    cout << res << "\n";
}