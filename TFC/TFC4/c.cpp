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
    ll n, k, mx=0;
    cin >> n>> k;
    vector<ll> str(2*n+100,0);
    string a;
    cin >> a;
    a+= a;
    for(ll i=6;i<2*n;i++){
        if(a.substr(i-6, 7) == "nanjing") str[i] = 1;
    }
    for(ll i=1;i<2*n;i++) str[i]+= str[i-1];

    for(ll i=6;i<n+k && i<2*n;i++){
        if(i<n) mx = str[i];
        else
        mx = max(mx, str[i]- str[i-n]);
    }

    cout << mx << endl;
    
    }
    return 0;
}