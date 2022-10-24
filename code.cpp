#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define f(i,a,b) for(int i=a; i<=b; ++i)
#define fn(i,a,b) for(int i=a; i>=b; --i)
const int MOD=1e9+7;
using namespace std;


ll solve(ll n, ll k){
	ll dp[k+1][n+1];
	 f(i,0,n) dp[1][i] = 1;
    ll sum = 0;
    f(i,2,k){
        f(j,0,n){
            sum = 0;
            f(x,0,j)
                sum += dp[i - 1][x];
            dp[i][j] = sum;
        }
    }
    return dp[k][n];
}
int main()
{
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  int t;
  cin >> t;
  while(t--){
  	ll n, k;
  	cin >>n >>k;
  	cout <<solve(n, k)<<'\n';
  }
return 0;
}