#include <bits/stdc++.h>
#define fore(i,a,b) for(int i=a;i<b;i++)
#define pb push_back
#define sz(x) (ll)x.size()
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
    
    ll res = 0;
    while(t--){
        string a, b;
        cin >> a >> b;

        int i = 0;
        while (a[i] != '\0') {
            res++;
            i++;
        }

        i = 0;
        while (a[i] != '\0') {
            int j = 0;
            bool falta = true;

            while (b[j] != '\0' && falta) {
                if (b[j] == a[i]) {
                    falta = false;
                    cout << b[j];
                }                 
                j++;
            }

            if(falta) {
                cout << "q";
                res++;
            }
            i++;
        }

        cout << res << "\n";   
    }
}