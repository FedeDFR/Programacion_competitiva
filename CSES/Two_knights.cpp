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
 
 
long calculateWays(int K) {
    // Total number of ways two knights can be placed on
    // the chessboard
    long totalWays = ((long) K * K * (K * K - 1)) / 2;
 
    // Number of ways two knights can attack each other
    long attackingWays = 4 * (K - 1) * (K - 2);
 
    // Number of ways two knights can be placed without
    // attacking each other
    long ans = totalWays - attackingWays;
 
    // Return the result for the current chessboard size K
    return ans;
}
 
// Driver Code
int main() {
    // Input the value of N (size of the chessboard)
    ll N; cin >> N;
 
    // Iterate for all the K sized chessboard
    for (int K = 1; K <= N; K++) {
        cout << calculateWays(K) << "\n";
    }
 
    return 0;
}