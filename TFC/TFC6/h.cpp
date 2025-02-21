#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define MOD 1000000007
using namespace std;
const int sz = 1e5;
vector<ll>S(sz), H(sz), w(sz);
ll n;
map<pair<ll,ll>,ll> memo1[1010];
map<pair<ll,ll>,ll> memo2[1010];
ll dp(ll i, ll h, ll s){
    if(i>=n) return 0;
    if(memo2[i][{h,s}] == -1) return memo1[i][{h,s}];

    ll ans1=0, ans2=0;
    ans1 = dp(i+1, h, s);
    ll hh= h- H[i], ss= s- S[i];
    if(hh>0){
        if(ss>=0) ans2= dp(i+1, hh, ss) + w[i];
        else if(hh+ss >0) ans2 = dp(i+1, hh+ss, 0) + w[i];
    }
    ans1 = max(ans1, ans2);
    memo2[i][{h,s}] = -1;
    return memo1[i][{h, s}] = ans1 ;
}
int main()
{
    
    fastio;
    ll h, s;
    cin >> n>> h>> s;
    for(ll i=0;i<n;i++){
        cin >> H[i] >> S[i] >> w[i];
    }
    cout << dp(0, h, s) << "\n";
 
    return 0;
}