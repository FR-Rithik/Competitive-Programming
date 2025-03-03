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
    ll n, ttl=0, ans = 1e12, l=1, r;
    cin >> n;
    r= 1;
    vector<ll> a(n+10), cnt(3000,0);
    for(ll i=0;i<n;i++){
      cin >> a[i];
      for(ll j=0;j<i;j++){
        if(a[j] > a[i]) ttl++;
      }  
    } 
    ans = ttl;
    for(ll i=0;i<n;i++){
        ll gt=0, sm= 0, sum;
        for(ll j=i+1;j<n;j++){
            if(a[j]<a[i]) sm++;
            if(a[j]> a[i]) gt++;
        
            sum = ttl + gt -sm;
            if(sum < ans){
                ans = sum;
                l= i+1, r= j+1;
            }

        }
    }

    cout << l<<" " << r  << endl;

    
    }
    return 0;
}