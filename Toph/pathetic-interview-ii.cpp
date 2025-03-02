#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define MOD 1000000007
using namespace std;
const int sz= 1e5;
ll cnt[sz], memo[sz];

ll cntCou(ll coins){
    if(cnt[coins] != -1) return cnt[coins];
    if(coins < 6) return cnt[coins] = coins;
    ll ans = coins;
    //cout << coins << endl;
    for(ll i=2;i*i<=coins;i++){
        if(coins %i ==0){
            ans = min(ans, cntCou(i)+ cntCou(coins/i));
        }
    }

    return cnt[coins] = min(ans, cnt[coins-1]+1);
}
ll dp(ll coins){
    if(memo[coins] != -1) return memo[coins];
    if(coins == 0) return 0;
    if(coins == 1) return 1;
    ll ans = coins;

    for(ll i=1;i<=coins;i++){
        ans = min(ans, dp(coins-i) + cnt[i]);
    }

    //cout << coins <<" " << ans << endl;

    return memo[coins] = ans;
}
int main()
{
    memset(cnt, -1, sizeof(cnt));
    memset(memo, -1, sizeof(memo));
    for(ll i=1;i<=3e4+10;i++) cntCou(i);
    ll n;
    cin >> n;
    cout<<dp(n)  << endl;
 
    return 0;
} 