#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define MOD 1000000007
using namespace std;
int main()
{
   ll t=1;
while(t--){
    ll n,k;
    cin >> n>> k;
    vector<ll> a(n), cumSum(n,0), ans(n,0);
    for(ll i=0;i<n;i++) cin >> a[i];
    sort(a.begin(), a.end());
    cumSum[0]= a[0];
    for(ll i=1;i<n;i++) cumSum[i]= cumSum[i-1]+a[i];
    for(ll i=0;i<n;i++){
        if(i<k) ans[i]= cumSum[i];
        else{
            ans[i]= cumSum[i]+ ans[i-k];
        }
    }
    for(ll i=0;i<n;i++) cout << ans[i] <<" ";
    cout << endl;
    }
    return 0;
}