#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define MOD 1000000007
using namespace std;

int main()
{
   fastio;
   ll t;
   cin >> t;
while(t--){
    
    ll n, k, ans=INT64_MAX, ans1;
    cin >> n>> k;
    vector<ll> a(n);
    for(ll i=0;i<n;i++) cin >> a[i];
    sort(a.begin(), a.end());
    ans = a[0]; 
    if(k==1){ 
        for(ll i=0;i<n;i++){
        for(ll j=i+1;j<n;j++){
            ll diff = abs(a[i]- a[j]);
            ans = min(ans, diff);
        }
     }
    }
    else if(k>=3) ans = 0;
    else{
        for(ll i=0;i<n;i++){
        for(ll j=i+1;j<n;j++){
            ll diff = abs(a[i]- a[j]);
            ans = min(ans, diff);
            ll p = upper_bound(a.begin(), a.end(), diff)- a.begin();
            ans = min(ans, abs(a[p-1]-diff));
            if(p!=n) ans = min(ans, abs(a[p]-diff));
        }
     }
    }

    cout<< ans << "\n";
    
    }
    return 0;
}