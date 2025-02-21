#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define MOD 1000000007
using namespace std;
int main()
{
   ll t=1;
while(t--){
    ll n, k, f=-1, ans=-1, cou=0;
    cin >> n>>k;
    vector<ll> a(n), diff(n-1);
    for(ll i=0;i<n;i++){
        cin >> a[i];
    }
    ll l=1, r=1e9;
    while(l<=r){
        ll mid= (l+r)/2;
        cou=0;
        for(ll i=1;i<n;i++){
            if(abs(a[i]-a[i-1])>mid) cou++;
        }
        cou++;
        if(cou==k){
            ans = mid;
        }
        if(cou> k) l= mid+1;
        else r= mid-1;
        //cout << mid <<" " << cou << endl;
    }

    if(n==1) ans=1;

    cout << ans<< endl;

    
    }
    return 0;
}