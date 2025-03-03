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
    ll n, x=0, y=0;
    cin >> n;
    map<string, ll> mp;
    string a;
    cin >> a;
    for(ll i=0;i<n;i++){
        if(a[i] == '-'){
            x++;
        }
        else if(a[i]=='_'){
            y++;
        }
    }

    cout << (x/2)*((x+1)/2)*y  << endl;
    
    }
    return 0;
}