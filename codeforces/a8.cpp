#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define f(i,a,b) for(int i=a; i<=b; ++i)
#define fn(i,a,b) for(int i=a; i>=b; --i)
const int MOD=1e9+7;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
   int a[5];
   f(i,1,4) cin >>a[i];
   sort(a+1,a+5);
   cout <<a[4] - a[1] <<" "<<a[4]-a[2]<<" "<<a[4]-a[3];

    return 0;
}