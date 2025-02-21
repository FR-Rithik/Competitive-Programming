#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define MOD 1000000007
using namespace std;
int main()
{
   ll t=1;
while(t--){
    ll n, k, ans=1;
    cin>> n>> k;
    for(ll i=0;i<n;i++){
        if(ans<=k) ans*=2;
        else ans= ans+k;
    }
    cout << ans << endl;
    
    }
    return 0;
}