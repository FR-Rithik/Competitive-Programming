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
    ll n, k, orr=0;
    cin >> n >> k;
    vector<ll> ans;
    for(ll i=0;i<n;i++){
        ll p;
        if((k|i) == k) p= i;
        else p=k;
        orr|=p;
        ans.push_back(p);
    }
    if(orr!=k) ans[n-1] = k;
    for(auto x: ans) cout << x<<" ";
    cout << endl;
    
    
    }
    return 0;
}