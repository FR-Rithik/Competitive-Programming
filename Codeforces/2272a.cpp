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
    ll n, k, p, stp;
    cin >> n>> k>> p;
    stp = (abs(k)+p-1)/p;
    if(stp <= n) cout << stp << endl;
    else cout << -1 << endl;
    
    }
    return 0;
}