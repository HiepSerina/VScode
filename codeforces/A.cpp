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
        int n;
        cin >>n;
        int a[n+1];
        f(i,1,n) cin >>a[i];
        string s;
        cin >>s;
        int tmp=0;
        f(i,1,n){
            f(j,2,n)
                if(a[i] == a[j] && s[i-1]!=s[j-1]) {
                    tmp = 1;
                    break;
                }
            
        }
        if(tmp == 0) cout <<"YES";
        else cout <<"NO";
        cout <<'\n';
    }

    return 0;
}