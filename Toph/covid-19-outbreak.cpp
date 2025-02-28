#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define MOD 1000000007
using namespace std;
const ll sz = 1e6+10;
ll a[sz], vst[sz];
vector<pair<ll,ll>>grph[sz];

ll dfs(ll node){
    ll cou=0;
    vst[node] = 1;
    for(auto child: grph[node]){
        if(vst[child.first] == 0)
        cou+= min(dfs(child.first), child.second) ;
    }
    cou+= a[node];

    return cou;
}

int main()
{
    memset(vst, 0, sizeof(vst));
    ll n, k;
    cin >> n>> k;
    vector<ll> temp;
    for(ll i=0;i<n-1;i++){
        ll x, y, w;
        cin >> x>> y>> w;
        grph[x].push_back({y, w});
        grph[y].push_back({x, w});
    }
    for(ll i=1;i<=n;i++) cin >> a[i];
    
    cout << dfs(k) << endl;
 
    return 0;
}