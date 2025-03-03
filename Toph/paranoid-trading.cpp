#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define MOD 1000000007
using namespace std;
const int sz = 1e3 + 100;
ll memo[sz][sz];
int main()
{
   ll t;
   cin >> t;
while(t--){
    memset(memo, 0 , sizeof(memo));
    ll n;
    cin >> n;
    vector<ll> a(n+10,0);
    for(ll i=1;i<=n;i++) cin >> a[i];
    for(ll i=2;i<=n;i++){
        for(ll j=1;j<i;j++){
            if(a[i]>a[j]){
                memo[i][a[i]- a[j]]= max(memo[i][a[i]- a[j]], memo[j-1][a[i]- a[j]] + a[i]-a[j]);
            }
            //cout << memo[i][j] <<" ";
        }
        for(ll j=1;j<=1000;j++){
            memo[i][j]= max(memo[i-1][j],max(memo[i][j], memo[i][j-1] )) ;
            //cout << memo[i][j] <<" ";
        }
        //cout << endl;
    }
    cout <<memo[n][1000] << endl;
    }
    return 0;
}