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
    ll k, cou=0;
    cin >> k;
    vector<pair<ll,ll>> ans;
    ll i=1, p=1;
    while(i){
        ll j=1;
        if(cou == k) break;
        while(j){
            ll temp=cou+j-1;
            if(temp > k) break;
            ans.push_back({i,p});
            cou+=(j-1);
            j++;
            p++;
        }
        i++;
        
    }
    cout << ans.size() << endl;
    for(auto x: ans) cout << x.first <<" " << x.second << endl;
    
    }
    return 0;
}