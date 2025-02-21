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
    ll a[2*n+10][n+10], b[n];
    memset(a, 0, sizeof(a));
    for(ll i=0;i<2*n-1;i++){
        if(i<n)
        for(ll j=0;j<=i;j++) cin >> a[i][j];
        else
        for(ll j=(i-n+1);j<n;j++) cin >> a[i][j];

    }
    for(ll i=1;i<2*n-1;i++){
        //if(i<n)
        for(ll j=0;j<n;j++){
            ll mx= a[i-1][j];
            if(j) mx = max(mx, a[i-1][j-1]);
            a[i][j] += mx;
        }
    }
    cout << "Case " << c<<": "<< a[2*n-2][n-1] << endl;
    
    }
    return 0;
}