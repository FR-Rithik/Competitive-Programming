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
    ll n, k;
    cin >> n>> k;
    vector<ll>a(k), fr(n+10,0), sc(n+10,0);
    for(ll i=0;i<k;i++) cin >> a[i];
    for(ll i=0;i<k;i++){
        ll x;
        cin >> x;
        fr[a[i]]=x;
        sc[a[i]]= x;
    }
    for(ll i=2;i<=n;i++){
        if(sc[i-1]==0) {}
       else if(sc[i])
       sc[i]= min(sc[i], sc[i-1]+1);
       else sc[i]= sc[i-1]+1;
    }
    for(ll i=n-1;i>0;i--){
        if(fr[i+1]==0){}
       else if(fr[i])
       fr[i]= min(fr[i], fr[i+1]+1);
       else fr[i]= fr[i+1]+1;
    }

    for(ll i=1;i<=n;i++){
        if(min(fr[i], sc[i])==0) cout << max(fr[i], sc[i])<<" ";
        else
        cout << min(fr[i], sc[i])<< " ";
    }

    cout << endl;
    
    }
    return 0;
}