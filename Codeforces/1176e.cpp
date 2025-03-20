//AC
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define MOD 1000000007
using namespace std;
int main()
{
    fastio;
   ll t;
   cin >> t;
while(t--){
    ll n, k, cou=0;
    cin >> n>> k;
    vector<ll> grph[n+10], color(n+10,0), ans, vst(n+10,0);
    while(k--){
        ll u, v;
        cin >> u>> v;
        grph[u].push_back(v);
        grph[v].push_back(u);
    }

    for(ll i=1;i<=n;i++){
        if(vst[i] == 0){
            ans.push_back(i); 
            for(auto x: grph[i]){
                vst[x] = 1;
            }
        }
    }
    if(ans.size() <= n/2){
      cout << ans.size() << endl;
      for(auto x: ans) cout << x<<" ";
      cout << endl;  
    }
    else {
        cout << n- ans.size() << endl;
        for(ll i=1;i<=n;i++){
            if(vst[i]) cout << i <<" ";
        }
        cout << endl;
    }

    

    }
    return 0;
}