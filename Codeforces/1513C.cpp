#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define MOD 1000000007
using namespace std;
ll memo[210000][2] ={0};
int main()
{
   ll t;
   cin >> t;
   memo[0][0] = 1;
   for(ll i=0;i<=100000;i++){
        //cout <<"HERE " <<i << endl;
        memo[i+10][0] = (memo[i+10][0] +memo[i][0])%MOD ;
        memo[i+10][1] = (memo[i+10][1] + memo[i][0])%MOD;
        memo[i+9][0] =  (memo[i+9][0] + memo[i][1])%MOD ;
        memo[i+9][1] = (memo[i+9][1]+ memo[i][1])%MOD ;
        //
   }
   cout << "here" <<endl;
   for(ll i=1;i<=100000;i++){
    if(memo[i][0] == 0)
    memo[i][0]= (memo[i-1][0])%MOD;
    if(memo[i][1] == 0)
    memo[i][1]= (memo[i-1][1])%MOD;

   } 

   for(ll i=0;i<=15;i++) cout << memo[i][0] <<" ";
   cout << endl;
   for(ll i=0;i<=15;i++) cout << memo[i][1] <<" ";
   cout << endl;
   
while(t--){
    ll n, m, ans=0;
    cin >> n >> m;
    while(n){
        ll k = n%10;
        n/=10;
        ans += (memo[m+k][0] + memo[m+k][1])%MOD;
        ans = ans%MOD;
    }

    cout << ans << endl;
    
    }
    return 0;
}