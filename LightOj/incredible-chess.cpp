#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define MOD 1000000007
using namespace std;
int main()
{
   ll t, c=0;
   cin >> t;
while(t-- && ++c){
    ll n, ans=0;
    cin >> n;
    ll a[n], b[n];
    for(ll i=0;i<n;i++) cin >> a[i];
    for(ll i=0;i<n;i++){
        cin >> b[i];
        ans ^=(b[i] - a[i]-1);
    }
    if(ans)
    cout << "Case " << c<<": " << "white wins" << endl;
    else cout << "Case " << c<<": " << "black wins" << endl;
    
    }
    return 0;
}