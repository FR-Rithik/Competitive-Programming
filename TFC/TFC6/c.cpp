#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define MOD 1000000007
using namespace std;
const int sz = 1e6+10;
vector<ll> g[sz];
vector<ll> rt;
ll vst[sz];
ll cou=0
map<pair<ll,ll>,ll> mp;
ll dfs(ll n, ll w){
    if(vst[n]) return 0;
    ll ans=0;
    for(auto x: g[n]){
        if(vst[x]==0){
            if(mp[{n, x}] && mp[{n, x}]!=w ) ans+= dfs(x,mp[{n, x}] );
            else if(mp[{x, n}] != x) ans+= dfs(x, mp[{x, n}]);
        }
    }

    return ans;

}
int main()
{
    ll n;
    cin >> n;
    for(ll i=0;i<n-1;i++){
        ll x,y, z;
        cin >> x>> y>> z;
        g[x].push_back(y);
        g[y].push_back(x);
        mp[{x, y}] = z;
    }
    ll k = dfs(1,0);
    cout << dfs(1,0) << endl;
 
    return 0;
}