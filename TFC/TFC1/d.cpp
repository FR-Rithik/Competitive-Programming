#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define MOD 1000000007
using namespace std;
int main()
{
   ll t=1;
while(t--){
    ll n, k, mn = 1e10, cou=1, f=0, pos;
    cin >> n>> k;
    pos = n-k;
    vector<ll> a(n);
    for(ll i=0;i<n;i++) cin >> a[i];
    for(ll i=1;i<n;i++){
        if(a[i]>a[i-1]) cou++;
        else cou=1;
        if( cou == k) f=1;
    }
    for(ll i=0;i<k;i++) mn= min(a[n-1-i], mn);
    for(ll i= k;i>0 && n-i-1>=0 ;i--){
        if(a[n-i-1]<mn){
            mn = a[n-i-1];
            pos = i;
        }
        else break;
    }
    //cout << pos <<" " << mn << endl;
    if(f){
        for(auto x: a) cout <<x<<" ";
        cout << endl;
    }
    else{
        sort(a.begin() + pos, a.begin() + pos + k);
        for(auto x: a) cout <<x<<" ";
        cout << endl;
    }
    
    }
    return 0;
}