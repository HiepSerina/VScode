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
   int t;
   cin >>t;
   while(t--){
        int hh, mm;
        cin >>hh >>mm;
        int ans = hh*60+mm;
        cout <<1440-ans <<'\n';
   }

    return 0;
}