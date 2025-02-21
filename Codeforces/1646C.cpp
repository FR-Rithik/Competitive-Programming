#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define MOD 1000000007
using namespace std;
int main()
{
   ll t;
   cin >> t;
   ll fact[20];
   fact[0] = 1;
   for(ll i=1;i<=15;i++) fact[i] = fact[i-1]*(i+1);
while(t--){
    ll n, ans=100;
    cin >> n;
    for(ll i=0;i<=(1ll<<15);i++){
        ll sum=0, x=i, k=0;
        while(x){
            sum+= (x&1ll)*fact[k];
            k++;
            x= x>>(1ll);
            
        }
        ll popCount =__builtin_popcountll(i)+ __builtin_popcountll(n-sum);
        ans = min(ans, popCount );
    }

    cout << ans << endl;
    
    }
    return 0;
}