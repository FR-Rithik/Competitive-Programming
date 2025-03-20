//not AC
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define MOD 1000000007
using namespace std;
const int sz = 1e5+ 100;
int cou=0;
vector<ll> grph[sz];
ll vst[sz];
ll dfs(ll node){
    ll childs = 1;
    vst[node] = 1;
    for(auto x: grph[node]){
        if(vst[x] == 0)
        childs+= dfs(x);
    }
    if(childs%2 == 0) cou++;
    return childs;
}
int main()
{
   ll t=1;
while(t--){
    cou=0;
    ll n;
    cin >> n;
    for(ll i=0;i<=n;i++) grph[i].clear();
    for(ll i=0;i<=n;i++) vst[i] = 0;
    for(ll i=1;i<n;i++){
        ll x, y;
        cin >> x>> y;
        grph[x].push_back(y);
        grph[y].push_back(x);
    }
    n= dfs(1);
    if(n%2) cout << -1 << endl;
    else cout << cou-1 << endl;
    
    }
    return 0;
}