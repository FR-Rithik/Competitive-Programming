#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define MOD 1000000007
using namespace std;
int main()
{
   ll t=1;
while(t--){
    ll n, k, f=-1;
    cin >> n>>k;
    vector<ll> a(n), diff(n-1);
    for(ll i=0;i<n;i++){
        cin >> a[i];
    }
    for(ll i=1;i<n;i++){
        diff[i-1] = abs(a[i]- a[i-1]);
    }
    diff.push_back(1e10);
    
    sort(diff.begin(), diff.end());
    //for(auto x: diff) cout << x<<" "; 
    if(n==1) f=1;
    else if(k==1) f= diff[n-2];
    else if(k==n && diff[0]>1) f= diff[0] - 1;
    else if(k<n){
        if(diff[n-1-k]!=diff[n-k]) f=diff[n-1-k];
    }
    if(f>0)
    cout << f << endl;
    else cout << -1 << endl;

    
    }
    return 0;
}