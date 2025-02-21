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
    ll n,k, temp = 1, f=1;
    cin >> n>> k;
    vector<ll> a(n), frq;
    map<ll,ll> chk;
    //while(temp<= 1e16)
    for(ll i=0;i<n;i++){
      cin >> a[i]; 
      while((a[i]>=k) || (a[i]==1)){
       // cout << a[i] <<endl;
        temp = 1;
        while(temp <= a[i]){
            temp= temp*k;
        }
        temp = temp/k;
        if(chk[temp]){
          f=0;  
          break;
        } 
        else{
            a[i] -= temp;
            chk[temp] = 1;
        }
      }
      if(a[i]>1) f=0;
    } 

    if(f) cout <<"YES" << endl;
    else cout <<"NO" << endl;
    }
    return 0;
}