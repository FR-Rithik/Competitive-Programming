#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define MOD 1000000007
using namespace std;
const int sz = 1e5+ 100;

vector<ll> grph[sz];

ll dfs(ll nd, ll cst, ll n, ll en){
    //cout << nd <<" " << cst << endl;
    if(nd == en){
        if(cst == n) return 1;
        else return 0;
    }

    ll ans=0;
    
    for(auto x: grph[nd]){
       ans= max(ans, dfs(x, cst+1, n, en)) ;
    }
    return ans;
}
int main()
{
    fastio;
    ll n, st, en;
    cin >> n;
    vector<ll> cnt(n+10,0);
    for(ll i=0;i<n;i++){
        ll x;
        cin >> x;
        if(x==0) en= i+1;
        while(x--){
            ll nd;
            cin >> nd;
            grph[i+1].push_back(nd);
            cnt[nd]++;
        }
        
    }
    for(ll i=1;i<=n;i++) if(cnt[i] == 0) st = i;
    
    cout << dfs(st, 1, n, en) << endl;
    return 0;
}