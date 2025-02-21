#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define MOD 1000000007
using namespace std;
ll binaryLw(ll l, ll r, ll a, ll b, ll x){
    ll ans = -1;
    while(l<=r){
        ll mid = (l+r)/2;
        if(x*mid< a) l = mid+1;
        else if(x*mid >b) r= mid-1;
        else{
            ans= mid;
            r= mid -1;
        } 
    }
    return ans;
}

ll binaryHi(ll l, ll r, ll a, ll b, ll x){
    ll ans = -1;
    while(l<=r){
        ll mid = (l+r)/2;
        if(x*mid< a) l = mid+1;
        else if(x*mid >b) r= mid-1;
        else{
            ans= mid;
            l= mid +1;
        } 
    }
    return ans;
}
int main()
{
   ll t;
   cin >> t;
while(t--){
    ll k, a1, b1, a2, b2, ans=0, kk=1;
    cin >> k>> a1>> b1>> a2>> b2;
    vector<ll> a, b;
    while(kk<=1e9){
        a.push_back(kk);
        kk*=k;
    }
    for(auto x: a){
        //cout <<x<<endl;
        ll l, r;
        l= binaryLw(a1, b1, a2, b2, x);
        r= binaryHi(a1, b1, a2, b2, x);
        if(l>0 && r>0) ans+= (r-l+1);
        //cout << r <<" " << l << endl;
        
    }

    cout << ans << endl;
    
    }
    return 0;
}