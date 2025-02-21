#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define MOD 1000000007
using namespace std;
int main()
{
   ll t=1;
   vector<ll> pw(1e6+100,1);
   for(ll i=1;i<=1e6+1;i++){
    pw[i]= (pw[i-1]*2)%MOD;
   }
while(t--){
    ll n;
    cin >> n;
    cout << pw[n] << endl;
    }
    return 0;
}