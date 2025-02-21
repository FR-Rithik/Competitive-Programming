#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define MOD 1000000007
using namespace std;
int main()
{
   ll t=1;
while(t--){
    ll n, m, nd= (1<<10)-1, ans=0;
    cin >> n>> m;
    vector<ll> a(n), b(m);
    for(ll i=0;i<n;i++) cin >> a[i];
    for(ll i=0;i<m;i++){
        cin >> b[i];
        nd= nd&b[i];
    }

    cout << nd << endl;

    for(ll i=0;i<n;i++){
        ans= ans|(a[i]&nd);
    }

    cout << ans << endl;
    
    }
    return 0;
}