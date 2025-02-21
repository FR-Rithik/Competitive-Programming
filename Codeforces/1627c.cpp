#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define MOD 1000000007
using namespace std;
const ll sz = 1e6;
vector<ll> grph[sz];
ll edge[] = {11,2};
ll chk[sz] = {0};
void dfs(ll n, ll flg, ll *ans){
    cout<<"# " << n <<" "<< *ans <<" " << flg<< endl;
    chk[n] =1;
    *(ans++) = edge[flg];
    for(auto x: grph[n]){
        if(chk[x] == 0){
            dfs(x, !flg, ans);
        }
    }
    return;
}
int main()
{
   ll t;
   cin >> t;
while(t--){
    ll n, f=1, one=0, starting;
    cin >> n;
    ll ans[n-1]={0};
    for(ll i=0;i<=n;i++) grph[i].clear(), chk[i] =0;
    for(ll i=0;i<n-1;i++){
        ll x, y;
        cin >> x>>y;
        grph[x].push_back(y);
        grph[y].push_back(x);
    }
    for(ll i=1;i<=n;i++){
        if(grph[i].size()>2) f=0;
        if(grph[i].size() == 1) one ++, starting = i; 
    }
    if(one!=2) f=0;
    dfs(starting,0,ans);
    if(f)
    for(auto x: ans) cout << x<< " ";
    else cout << -1;
    cout << endl;

    
    }
    return 0;
}