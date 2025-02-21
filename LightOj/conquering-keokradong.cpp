#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define MOD 1000000007
using namespace std;
int main()
{
   ll t, c=0;
   cin >> t;
while(t-- && ++c){
    ll n, k, ans=0, mn=1e17;
    cin >> n>> k;
    vector<ll> a(n+1), mxCamping;
    for(auto &x: a) cin >> x, mn = min(mn, x);
    a.push_back(1e17);
    ll l=mn, r= 1e16;
    while(l<=r){
        ll mid = (l+r)/2;
        ll segments =0, sum=0, mx = 0;
        vector<ll> temp;
        for(ll i=0;i<=n+1;i++){
            sum+= a[i];
            if(sum > mid){
                mx = max(mx, sum-a[i]);
                temp.push_back(sum-a[i]);
                sum = a[i];
                segments ++;
            }
        }
        if(segments-1> k) l = mid + 1;
        else{
            mxCamping.clear();
            mxCamping = temp;
            r = mid -1;
            ans = mx;
        }
    }

    cout << "Case " << c<<": " << ans << endl;
    for(auto x: mxCamping) cout << x<<endl;
    
    }
    return 0;
}