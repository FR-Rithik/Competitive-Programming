//not AC
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define MOD 1000000007
using namespace std;
const int sz = 2e5 + 1000;
vector<ll> grph[sz];
ll vst[sz], f=1, pth[sz];
map<pair<ll,ll>, ll> ans;
void dfs(ll node, ll parent, ll flg){
    vst[node] = 1;
    pth[node]= flg;
    //ans[{parent, node}]= flg;
    //ans[{node, parent}]= flg;
    for(auto x: grph[node]){
        if(vst[x] && pth[x] == pth[node]){
            f=0;
            return;
        }
        if(vst[x] == 0){
            ans[{node, x}] = flg;
            dfs(x, node, -1*flg);
        }
    }
}
int main()
{
   ll t=1;
while(t--){
    f=1;
    ll n, m;
    cin >> n>> m;
    for(ll i=0;i<n;i++){
      grph[i].clear();  
      vst[i] = 0;
      pth[i]=0;
    } 
    pair<ll,ll> edges[m];
    for(ll i=0;i<m;i++){
        ll u, v;
        cin >> u>> v;
        edges[i]= {u, v};
        grph[u].push_back(v);
        grph[v].push_back(u);
    }
    dfs(1,0, 1);
    if(f==0){
        cout << "NO"<< endl;
        continue;
    }
    cout << "YES" << endl;
    for(auto x: edges){
        cout << (pth[x.first]<pth[x.second]);
       // cout << ans[{x.first, x.second}] << endl;
        // if(ans[{x.first, x.second}]){
        //     if(ans[{x.first, x.second}] == -1)
        //     cout << 1;
        //     else cout << 0;
        // }
        // else{
        //     if(ans[{x.second, x.first}] == -1)
        //     cout << 0;
        //     else cout << 1;
        // }
    }
    cout << endl;
    
    }
    return 0;
}