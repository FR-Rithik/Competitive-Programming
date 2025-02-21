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
    ll n, m, ans=0;
    cin >> n >> m;
    if(n%2 && m%2){
        ans = ((m+1)/2)*((n+1)/2) + (m/2)*(n/2);
    }
    else if(n%2 == 0 && m%2 == 0){ 
        ans = n*m/2;
    }
    else{
        if(n%2 == 0) swap(n, m);
        ans = max((m/2)*(2*n+1)/2, n*m/2);
    }
    cout << "Case " << c<<": "<< ans << endl;
    
    }
    return 0;
}