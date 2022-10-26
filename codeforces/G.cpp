#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define fi first
#define se second
#define f(i,a,b) for(int i=a; i<=b; ++i)
#define fn(i,a,b) for(int i=a; i>=b; --i)
const int MOD=1e9+7;
using namespace std;
int cnt;
int main(){

    int t;
    cin >>t;
    while(t--){
        int n;
        cnt=1;
        cin >>n;
        int a[n+1];
        f(i,1,n) cin >>a[i];
        sort(a+1,a+n+1);
        f(i,2,n){
            if(a[i]!=a[i-1]) cnt++;
        }
        cout <<cnt <<'\n';
    }
}