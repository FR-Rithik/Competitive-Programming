//AC
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define MOD 1000000007
using namespace std;
const int sz = 2e3 + 100;
ll memo[sz][sz];
int main()
{
   ll t=1;
while(t--){
    ll n, h, l , r, ans=0;
    cin >> n>> h>> l>> r;
    for(ll i=0;i<=n;i++){
        for(ll j=0;j<=h;j++) memo[i][j] = -1;
    }
    memo[0][0] = 0;
    vector<ll> a(n);
    for(ll i=0;i<n;i++) cin >> a[i];
    for(ll i=0;i<n;i++){
        for(ll j=0;j<h;j++){
            if(memo[i][j] == -1) continue;
            ll hr = (j+ a[i])%(h);
            if(hr <= r && hr>=l){
                memo[i+1][hr] = max(memo[i][j] +1, memo[i+1][hr]);
            }
            else{
                memo[i+1][hr] = max(memo[i][j], memo[i+1][hr]);
            }
            ans = max(ans,memo[i+1][hr] );
            hr = (j+ a[i]-1)%(h);
            if(hr <= r && hr>=l){
                memo[i+1][hr] = max(memo[i][j] +1, memo[i+1][hr]);
            }
            else{
                memo[i+1][hr] = max(memo[i][j], memo[i+1][hr]);
            }
            ans = max(ans,memo[i+1][hr] );
        }
    }

    cout << ans << endl;
    
    }
    return 0;
}