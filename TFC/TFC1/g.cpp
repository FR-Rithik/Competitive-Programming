#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define MOD 1000000007
using namespace std;

int main()
{
   ll t;
   cin >> t;
while(t--){
    ll n, m ,q , lv = -1, cnt;
    cin >> n>> m>> q;
    cnt= m;
    ll pnt[m+10];
    map<pair<ll,ll>, ll> mp;
    vector<pair<ll,ll>> ans;
    memset(pnt, 0, sizeof(pnt));
    while(q--){
        ll k, id, x;
        cin>> k;
        if(k == 1){
            cin >> x;
            lv = x;
            cnt = m;
        }
        else{
            cin >> id>> x;
            if(lv == x){
                if(mp[{lv, id}]){

                }
                else{
                    mp[{lv, id}]++;
                    if(k == 3){
    
                    } 
                    else{
                        pnt[id] += cnt--;
                    }
                }                
            }

        }
    }

    for(ll i=1;i<=m;i++) ans.push_back({pnt[i],i});
    sort(ans.begin(), ans.end());
    ans.push_back({-1, -1});
    //for(auto x: ans) cout << x.second <<" " << x.first << endl;
    ll i=1, j=0;
    while(i<=m){
        if(ans[i].first == ans[j].first) i++;
        else{
            //cout << i<<" " << j << endl;
            ll k= i-1, p=j;
            while(k>=p){
                swap(ans[k], ans[p]);
                k--, p++;
            }
            j=i, i++;
        }
    }
    //for(auto x: ans) cout << x.second <<" " << x.first << endl;

    for(ll i=m-1;i>=0;i--) cout << ans[i].second<<" " << ans[i].first << endl;
    
    
    }
    return 0;
}