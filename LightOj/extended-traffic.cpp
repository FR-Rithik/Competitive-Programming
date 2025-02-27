#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define MOD 1000000007
using namespace std;
const ll INF = 1000000000;
const ll sz = 1e6;
vector<pair<ll, ll>> grph[sz];
vector<ll> d, p;
void dijkstra(ll s, ll n) {
    d.assign(n+10, INF);
    p.assign(n+10, -1);
    d[s] = 0;
    set<pair<ll, ll>> q;
    q.insert({0, s});
    while (!q.empty()) {
        ll v = q.begin()->second;
        cout << "node " << v << endl;
        q.erase(q.begin());
        for (auto edge : grph[v]) {
            ll to = edge.first;
            ll len = edge.second;

            if (d[v] + len < d[to]) {
                q.erase({d[to], to});
                d[to] = d[v] + len;
                p[to] = v;
                q.insert({d[to], to});
            }
        }
        
    }
}
int main()
{
   ll t, c=0;
   cin >> t;
while(t-- && ++c){
    ll n, ans=0, m, q;
    cin >> n;
    for(ll i=0;i<=n;i++) grph[i].clear();
    ll a[n+10], b[n];
    for(ll i=1;i<=n;i++) cin >> a[i];
    
    cin >> m;
    for(ll i=0;i<m;i++){
        ll u, v;
        cin >> u>> v;
        grph[u].push_back({v, (a[v]- a[u])*(a[v]- a[u])*(a[v]- a[u])});
        //grph[v].push_back({u, w});
    }
    dijkstra(1, n);
    // for(ll i=1;i<=n;i++) cout << d[i] <<" ";
    // cout << endl;
    cout << "Case " << c<<": " << endl;
    cin >> q;
    while(q--){
        ll x;
        cin >> x;
        cout<<"Ans : ";
        if(d[x]!=INF && d[x]>=3)
        cout << d[x] << endl;
        else cout << "?" << endl;
    }
    
    
    }
    return 0;
}