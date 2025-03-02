#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define MOD 1000000007
using namespace std;
int main()
{
    ll n, mx= 1e12, in=1;
    cin >> n;
    vector<ll> a(n+10);
    for(ll i=1;i<=n;i++){
        cin >> a[i];
        if(i<3) { }
        else{
            if(mx > max(a[i], a[i-2])){
                mx = max(a[i], a[i-2]);
                in = i-2;
            }
        }
    }

    cout << in<<" " << mx << endl;
 
    return 0;
}