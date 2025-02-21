#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define MOD 1000000007
using namespace std;
const int sz = 1e6+10;
vector<ll> grph[sz];
ll vst[sz];
stack<ll> top;
void dfs1(ll node){
    if(vst[node]) return;
    vst[node] = 1;
    for(auto x: grph[node]){
        if(vst[x] == 0){
          dfs1(x);
        }
        
    }
    top.push(node);
    return;
}

void dfs2(ll node){
    if(vst[node]) return;
    vst[node] = 1;
    for(auto x: grph[node]){
        if(vst[x] == 0){
          dfs1(x);
        }
        
    }
    return;    
}
int main()
{
   ll t, c=0;
   cin >> t;
while(t-- && ++c){
    ll n, ans=0, m;
    cin >> n>> m;
    for(ll i=0;i<=n;i++) grph[i].clear();
    for(ll i=0;i<m;i++){
        ll u, v;
        cin >> u>> v;
        grph[u].push_back(v);
    }
    memset(vst, 0, sizeof(vst));

    for(ll i=1;i<=n;i++){
        dfs1(i);
    }
    memset(vst, 0, sizeof(vst));
    while(top.size()){
        ll x= top.top();
        top.pop();
        if(vst[x]){}
        else{
            ans++;
            dfs2(x);
        }
    }

    cout << "Case " << c<<": ";
    cout << ans << endl;
    
    }
    return 0;
}