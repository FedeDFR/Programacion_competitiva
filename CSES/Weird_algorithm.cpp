#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define fore(i,a,b) for(int i=a;i<b;i++)
#define pb push_back
#define sz(x) ((int)x.size())
#define fst first
#define snd second 
#define all(x) x.begin(),x.end()
#define imp(v) {for(auto gdljh:v)cout<<gdljh<<" "; cout<<"\n";}
#define NICO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);


typedef long long ll;
const ll MOD=1e9+7;


int main () {
    ll n; cin >> n;

    cout << n << " ";

    while (n != 1) {
        if (n%2==0) n = n/2;
        else n = n*3+1;
        cout << n << " ";
    }
    
    
}
