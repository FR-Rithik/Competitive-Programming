#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define MOD 1000000007
using namespace std;
int main()
{
   ll t=1;
while(t--){
    ll n, h, ans=0, f=1;
    cin>> n>> h;
    for(ll i=0;i<n;i++){
        vector<ll> a(3);
        for(ll j=0;j<3;j++) cin >> a[j];
        sort(a.begin(), a.end());
        //for(auto x : a) cout << x<<" ";
        if(a[2]<=h || a[1]<=h) ans+= a[0];
        else if(a[0] <= h) ans+= a[1];
        else f=0;a
    }
    if(f)
    cout << ans << endl;
    else cout <<"impossible" << endl;
    
    }
    return 0;
}