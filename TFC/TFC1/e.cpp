#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define MOD 1000000007
using namespace std;
int main()
{
   ll t=1;
while(t--){
    ll x, y, z;
    cin >> x>> y>> z;
    cout << 100 << endl;
    for(ll i=0;i<50;i++) cout << x<<" ";
    for(ll i=0;i<45;i++) cout << y << " ";
    for(ll i=0;i<4;i++) cout << z <<" ";
    cout << z+1 << endl;
    
    }
    return 0;
}