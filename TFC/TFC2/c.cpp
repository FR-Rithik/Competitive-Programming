#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define MOD 1000000007
using namespace std;
const ll mx= 1e10;
int main()
{
   ll t=1;
while(t--){
    ll n, cou=0;
    cin >> n;
    vector<ll> a(n), qu, ans(n+10,mx);
    map<ll,ll> mp;
    for(ll i=0;i<n;i++) cin >> a[i], mp[a[i]]=i;
    //a.pop_back();
    //cout <<*(--a.end()) << endl;
    for(ll i=0;i<n;i++){
        if(qu.size() == 0) qu.push_back(a[i]);
        else{
            for(ll j=qu.size()-1;j>=0;j--){
                if(qu[j]<a[i])qu.pop_back();
                else{
                    
                    break;
                }
            }
            qu.push_back(a[i]);
            if(qu.size() >=2)
            ans[i] = min(ans[i], i-mp[qu[qu.size()-2]]);
        }
        //cout << i<<" "<< *(--qu.end())<< endl;

    }
    qu.clear();
    for(ll i=n-1;i>=0;i--){
        if(qu.size() == 0) qu.push_back(a[i]);
        else{
            for(ll j=qu.size()-1;j>=0;j--){
                if(qu[j]<a[i])qu.pop_back();
                else{
                    
                    break;
                }
            }
            qu.push_back(a[i]);
            if(qu.size() >=2)
            ans[i] = min(ans[i], mp[qu[qu.size()-2]]-i);
        }
        //cout << i<<" "<< *(--qu.end())<< endl;

    }
    for(ll i=0;i<n;i++) if(ans[i] != mx) cou+= ans[i];

    cout << cou << endl;
    
    }
    return 0;
}