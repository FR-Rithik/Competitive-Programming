#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define MOD 1000000007
using namespace std;
ll memo[40000+100][501];
ll cnt[41000]={0};
vector<ll> palindrome(1,0);

bool ifPalindrome(ll n){
    string s = to_string(n);
    ll f=1, len = s.size();
    for(ll i=0;i<len/2;i++){
        if(s[i]!= s[len-i-1]) f=0;
    }
    return f;
}
ll dp(ll coins, ll k){
    //cout << coins << endl;
    ll ans = 0;
    if(coins == 0) return 1;
    if(coins < palindrome[k]) return 0;
    if(k!=1) return (cnt[coins] - memo[coins][k-1] + MOD)%MOD;
    
    for(ll i=k;i<palindrome.size() && palindrome[i] <= coins;i++){
        ans =  (ans + dp(coins - palindrome[i], i))%MOD;
        memo[coins][i]= ans%MOD;  
        //}    
    }

    return cnt[coins] = ans%MOD;
    }
int main()
{
    fastio;
   ll t;
   cin >> t;
   memset(memo, 0, sizeof(memo));
   for(ll i=1;i<=40010;i++){
    if(ifPalindrome(i)) palindrome.push_back(i);
   }

   //for(auto x: palindrome) cout << x << endl;

   dp(40000,1);

while(t--){
    ll n;
    cin >> n;
    cout << cnt[n] << endl;
    // for(auto x: memo[n]) cout << x<<" ";
    // cout << endl;
    
    }
    return 0;
}