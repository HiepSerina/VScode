/*Make it count*/
#include <bits/stdc++.h>
#define ll  long long
#define fi first
#define se second
#define f(i,a,b) for(int i=a; i<=b; ++i)
#define fn(i,a,b) for(int i=a; i>=b; --i)
#define faster() ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
const int MOD=1e9+7;
using namespace std;
int a[1005];

int main(){
    faster();
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >> n;
        if(n%2) cout <<"Bob";
        else {
            int cnt=0;
            while(n%2==0) cnt++,n/=2;
            if(n >= 1) cout <<"Alice";
            else if(cnt%2 == 0) cout <<"Alice";
            else cout <<"Bob";
        }
            cout <<'\n';
    }

    return 0;
}

