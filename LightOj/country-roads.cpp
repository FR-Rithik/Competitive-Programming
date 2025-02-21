#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define MOD 1000000007
using namespace std;
const int sz = 2e4;
const ll INF = 1e18;
struct edge{
    ll u,v, w;

    bool operator<(const edge &other) const {
        return tie(u, v, w) < tie(other.u, other.v, other.w);
    }
};
vector<edge> grph[sz];
//map<edge, ll> vst;
ll vst[sz] = {0};
ll weight[sz] = {0};

void short_path (ll node, ll w){
    //weight[node] = min(weight[node], w);
    cout << node << endl;
    vst[node]= 1;
    for(auto x: grph[node]){
        if(!vst[x.v]){
            // vst[{x.u, x.v, x.w}]= 1;
            // vst[{x.v, x.u, x.w}]= 1;
            weight[node] = min(weight[node], max(x.w, weight[node]));
            short_path(x.v, max(x.w, weight[node]));
        }
        
    }
    return;
}


int main()
{
   ll t, c=0;
   cin >> t;
while(t-- && ++c){
    ll n,m, ans=0, q;
    cin >> n>>m;
    for (int i = 0; i < n; i++) grph[i].clear();
    fill_n(weight, n, INF);
    memset(vst, 0, sizeof(vst));
    for(ll i=0;i<m;i++){
        ll u, v, w;
        cin >> u>> v>> w;
        grph[u].push_back({u,v, w});
        grph[v].push_back({v,u, w});
    }
    cin >> q;
    short_path(t, 0);
    cout << "Case " << c<<":" << endl;
    for(ll i=0;i<n;i++){
        if(weight[i]!=INF)
         cout << weight[i] << endl;
        else cout <<"Impossible" << endl;
    }
    
    }
    return 0;
}