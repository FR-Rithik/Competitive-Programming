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
    ll x, y, ans;
    cin >> x>> y;
    if(x==0 || y==0) ans= abs(x+y);
    if(x>0){
        if(y>0) ans= x+y; 
        else{
            if(x<=abs(y)) ans = y;
            else ans = x;
        }
    } 
    else if(x<0){
        if(y<0) ans= abs(x+y);
        else{
           if(abs(x)<=y) ans = y;
            else ans = abs(x); 
        } 
    }

    cout << abs(ans) << endl;
    
    }
    return 0;
}