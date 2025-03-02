#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define MOD 1000000007
using namespace std;

ll sqChk(ll n){
    ll sq= sqrtl(n*(n+1)/2);

    return (sq*sq) == n*(n+1)/2;

}
int main()
{
   ll t;
   cin >> t;
while(t--){
    ll n;
    cin >> n;
    if(sqChk(n)) cout << -1;
    else{
        for(ll i=1;i<=n;i++){
            if(sqChk(i)){
                cout << i+1<<" "<< i<<" ";
                i++;
            }
            else cout << i<<" ";
        }
        
    }
    cout << endl;
    }
    return 0;
}