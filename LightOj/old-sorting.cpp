#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define MOD 1000000007
using namespace std;
const int sz = 1e4;
vector<ll> grph[sz];
ll vst[sz];

void dfs(ll node){
    if(vst[node]) return;
    vst[node] =1;
    for(auto x: grph[node]){
        dfs(x);
    }

    return;
}
int main()
{
   ll t, c=0;
   cin >> t;
while(t-- && ++c){
    memset(vst, 0, sizeof(vst));
    ll n, ans=0;
    cin >> n;
    for(ll i=0;i<=n;i++) grph[i].clear();
    ll a[n+10], b[n];
    for(ll i=1;i<=n;i++){
        cin >> a[i];
        grph[i].push_back(a[i]);
    }

    for(ll i=1;i<=n;i++){
        if(vst[i] == 0){
            ans++;
            dfs(i);
        }
    }

    cout << "Case " << c<<": ";
    cout << n- ans << endl;

    
    }
    return 0;
}