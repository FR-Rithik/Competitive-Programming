//AC
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define MOD 1000000007
using namespace std;
int main()
{
   ll t;
   cin >> t;
while(t--){
    ll n, ng=0, pg = 0, cp=0, cn=0, ans=-10;
    cin >> n;
    vector<ll> a(n);
    for(ll i=0;i<n;i++){
        cin >> a[i];
        if(a[i] <0) ng-=a[i];
        else pg += a[i];
    }
    for(ll i=0;i<n;i++){
        ans = max(ans, cp + ng - cn);
        if(a[i] <0) cn-=a[i];
        else cp += a[i];

    }
    ans = max(ans, cp + ng - cn);

    cout << ans << endl;


    
    }
    return 0;
}