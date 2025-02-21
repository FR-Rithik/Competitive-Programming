#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define MOD 1000000007
using namespace std;

const int sz = 1e6+10;
vector<ll> grph[sz];
vector<ll> grph2[sz];
vector<ll> root;
ll vst[sz];
ll cst[sz];
stack<ll> tp; // top nodes

void dfs1(ll node){
    if(vst[node]) return;
    vst[node]= 1;
    for(auto x: grph[node]){
        if(vst[x] == 0) dfs1(x); 
    }
    tp.push(node);
}

void reverseGrph(ll n){
    for(ll i=1;i<=n;i++){
        for(auto x: grph[i])
        grph2[x].push_back(i);
    }
}

ll dfs2(ll node){
    root.push_back(node);
    vst[node] =1 ;
    ll ans = cst[node-1];
    for(auto x: grph2[node]){
        if(!vst[x]){
          ans= min(ans, dfs2(x)); 
        }    
    }
    
    return ans;
}
int main()
{
   ll t=1;
while(t--){
    ll n, m, ans=0, cou=0, ttl=1;
    cin >> n;
    for(ll i=0;i<=n;i++) grph[i].clear();
    memset(cst, 0 , sizeof(cst));
    for(ll i=0;i<n;i++) cin >> cst[i];
    cin >> m;
    for(ll i=0;i<m;i++){
        ll u, v;
        cin >> u>> v;
        grph[u].push_back(v);
    }
    memset(vst, 0, sizeof(vst));
    for(ll i=1;i<=n;i++){
        dfs1(i);
    }

    reverseGrph(n);
    memset(vst, 0, sizeof(vst));
    while(tp.size()){
        ll x= tp.top();
        tp.pop();
        //
        if(vst[x] == 0){
            root.clear();
            cou=0;
            ll mn= dfs2(x);
            ans+= mn;         
            for(auto xx: root) if(cst[xx-1]==mn) cou++;
            ttl = (ttl*cou)%MOD;
        }
    }

    cout << ans <<" " << ttl <<  endl;
    }
    return 0;
}