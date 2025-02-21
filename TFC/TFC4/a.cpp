#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define MOD 1000000007
using namespace std;
int main()
{
    ll n, ans=0, pv=0, nv=0, l=0, inl =n, inr=n,mx  =-1e15, mn = 1e15;
    cin >> n;
    vector<ll> a(n+1,0), str(n+1,0), cumSum(n+1,0), sum(n+1,0);
    for(ll i=1;i<=n;i++){
        cin >> a[i];
        if(a[i]>=0) pv+= a[i];
        else nv+= a[i];
        str[i]= pv+ 3*nv;
        cumSum[i]= cumSum[i-1]+ abs(a[i]);
        sum[i]= a[i]+ sum[i-1];
        // if(str[i]<mn){
        //     l = i;
        //     mn = str[i];
        // } 
        // else{
        //     if(str[i]>=mx && str[i] >mn){
        //         inr = i;
        //         inl= l+1;
        //         mx = str[i];
        //     }
        // }
    } 
    ans= cumSum[n];
    for(ll i=1;i<=n;i++){
        if(str[i]<str[l]){
            l=i;
        }
        else{
            ans = max(ans, cumSum[l] + cumSum[n]-cumSum[i] + 2*(sum[i]-sum[l]));
        }
        //cout << ans << endl;
    }

    cout << ans << endl;
    

 
    return 0;
}