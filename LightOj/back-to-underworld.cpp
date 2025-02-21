#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define MOD 1000000007
using namespace std;
const int sz = 2e4+100;

vector<ll> grph[sz];
ll vst[sz] = {0};
ll str[2] = {0};

void dfs(ll node, ll flg){
    //cout << node <<" " << flg << endl;
    ll cou=1 ;
    vst[node] = 1;
    str[flg]++;
    for(auto x: grph[node]){
        if(!vst[x])
        dfs(x, 1-flg);
    }

    return ;
}
int main()
{
   ll t, c=0;
   cin >> t;
while(t-- && ++c){
    memset(vst, 0, sizeof(vst));
    for(ll i=0;i<sz-1;i++) grph[i].clear();
    ll n, ans=0, cou1=0, cou2=0;
    cin >> n;
    while(n--){
        ll u, v;
        cin >> u>> v;
        grph[u].push_back(v);
        grph[v].push_back(u);
    }
    for(ll i=1;i<=sz;i++){
        str[0]=0, str[1] = 0;
        if(!vst[i] && grph[i].size()) dfs(i, 0);
        ans += max(str[0], str[1]);
        //cout << i <<" " << str[0] << " " << str[1] << endl;
    }
    cout << "Case " << c<<": ";
    cout << ans << endl;
    
    }
    return 0;
}