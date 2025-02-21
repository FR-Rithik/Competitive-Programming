#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define MOD 1000000007
using namespace std;
int main()
{
   ll t=1;
while(t--){
    ll n, ans=0, sum=0;
    cin >> n;
    for(ll i=0;i<n;i++){
        ll x;
        cin >> x;
        sum+= x;
        if(sum<=0) ans= max(ans, -1*sum);
    }
    cout << ans << endl;
    }
    return 0;
}