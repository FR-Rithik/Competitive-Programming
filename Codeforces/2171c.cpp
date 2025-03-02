#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define MOD 1000000007
using namespace std;
const int sz = 1e5 + 100;
vector<ll> grph[sz];
ll vst[sz];
void dfs(ll node){
    //cout << node <<" ";
    vst[node]=1;
    for(auto x: grph[node]){
        
        if(vst[x] == 0){
           dfs(x); 
           cout << x <<" ";
        }
        

    }
}
int main()
{
   ll t;
   cin >> t;
while(t--){
    
    ll n, s, e;
    cin >> n>> s>> e;
    for(ll i=0;i<=n;i++) grph[i].clear(), vst[i]=0;
    for(ll i=1;i<n;i++){
        ll u, v;
        cin >> u>> v;
        grph[u].push_back(v);
        grph[v].push_back(u);
    }
    dfs(e);
    cout<< e<<" " << endl;
    
    }
    return 0;
}