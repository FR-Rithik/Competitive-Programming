#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define MOD 1000000007
using namespace std;
int main()
{
   ll t=1;
while(t--){
    string o= ".-.-", k= ".-", a;
    cin >> a;
    for(auto x: a){
        if(x =='O') cout << o;
        else cout <<k;
    }
    cout << endl;
    
    
    }
    return 0;
}