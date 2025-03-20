#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define MOD 1000000007
using namespace std;
ll ttl_sets(ll n){
    ll cou=0;
    while(n){
        cou+= (n&1ll);
         n= n>>1;
    }
    return cou;
}
int main()
{
   ll t;
   cin >> t;
while(t--){
    ll n, ans=0, cou=0, nn;
    cin >> n;
    ll bts[40]= {0};
    for(ll i=0;i<n;i++){
        ll x = i;
        for(ll j=0;j<40;j++){
            bts[j]+= (i&(1ll<<j))?1:0;
        }
    }
    for(ll i=0;i<n;i++){
        ll x = i;
        ll setCou= ttl_sets(i);
        cout << i<<" "<< setCou <<" ";
        if( i == ((1ll<<(setCou))-1)){
            ll mxCou=0;
            for(ll j=i+1;j<n;j++){
                if(i!=j){
                    mxCou = max(mxCou, i&j);
                }
            }

            ans += mxCou;
            for(ll j=0;j<setCou;j++) bts[j]--;
            cout<<"here " << ans << endl;
            continue;
        }
        for(ll j=39;j>=0;j--){
            cout<<j<<" " << bts[j] << endl;
            bts[j] -= (i&(1ll<<j))?1:0;
            ll cou=0;
            for(ll k=39;k>=j;k--){
                cou += bts[k];
            }
            if(cou) ans+= ((i&(1ll<<j))?1:0)*(1ll<<j);
        //cout<< j<<" " << ans << endl;
    } 
    cout << ans << endl;
        
    }
    cout << ans << endl;
    
    }
    return 0;
}