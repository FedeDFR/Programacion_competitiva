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
      string a, b;
      cin >> a >> b;
    ll i = 0, j = 0;
      while (a[i] != '\0') {
        i++;
      }

      while (b[j] != '\0') {
        j++;
      }

      if (a[i-1] < b[j-1]) {
        cout << "> \n";
      } else if (a[i-1] > b[j-1]) {
        cout << "< \n";
      } else {
        if (a[i-1] == 'M') {
          cout << "= \n";
        } else if (a[i-1] == 'S') {
          if (i < j) {
            cout << "> \n";
          } else if (i > j) {
            cout << "< \n";
          } else {
            cout << "= \n";
          }
        } else if (a[i-1] == 'L') {
          if (i < j) {
            cout << "< \n";
          } else if (i > j) {
            cout << "> \n";
          } else {
            cout << "= \n";
          }
        }
      }
    }
}
