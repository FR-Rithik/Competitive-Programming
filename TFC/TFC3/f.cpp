#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define MOD 1000000007
using namespace std;
int main()
{
   ll t=1;
while(t){
    ll n, ans=0;
    cin >> n;
    if(n==0) break;
    for(ll i=0;i<n;i++){
        ll x;
        cin >> x;
        if(ans+x<=300) ans+=x;
    }
    cout << ans << endl;
    }
    return 0;
}