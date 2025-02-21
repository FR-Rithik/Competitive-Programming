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
    ll n, k, ans=0;
    cin >> n>> k;
    
    string a;
    cin >> a;
   // for(ll i=0;i<n;i+=k) cout << a.substr(i,k) << endl;
    for(ll i=0;i<k/2;i++){
        ll alp[30] = {0};
        ll sum=0, mx=0;
        for(ll j=i;j<n;j+=k){
            alp[a[j]-'a']++;
        }
        for(ll j=n-i-1;j>=0;j-=k) alp[a[j]-'a']++;
        for(ll i=0;i<27;i++) mx= max(mx, alp[i]);
        ans+= 2*(n/k)-mx;
    }
    //cout << ans << endl;
    if(k%2){
        ll alp[30] ={0};
        ll mx=0;
        for(ll j=k/2;j<n;j+=k){
            alp[a[j]-'a']++;
            //alp[a[j+k-1-i]-'a']++;
        }
        for(ll i=0;i<27;i++) mx= max(mx, alp[i]);
        ans+= (n/k)-mx;
    }

    cout << ans << endl;
    
    }
    return 0;
}