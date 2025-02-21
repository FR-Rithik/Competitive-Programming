#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define MOD 1000000007
using namespace std;
int main()
{
   ll t, c=1;
   cin >> t;
while(t--){
    ll p, l, n, cou=0;
    cin >> p>> l;
    n= p-l;
    set<ll> ans;
    for(ll i=1;i*i<=n;i++){
        if(n%i == 0) ans.insert(i), ans.insert(n/i);
    }
    cout << "Case " << c<<": ";
    for(auto x: ans){
        //cout << x <<" ";
        if(x>l){
            cou++;
            cout << x<<" ";
        } 
    }
    if(cou == 0) cout <<"impossible";
    cout <<endl;
    
    //
    c++;
    }
    return 0;
}