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
    ll n, k;
    cin >> n>> k;
    string a;
    for(ll i=0;i<n;i++) a.push_back('A'+i);
    //cout << a << endl;
    cout << "Case " << c<<": "<< endl;
    for(ll i=0;i<k;i++){
        cout << a << endl;
        if(next_permutation(a.begin(), a.end())){}
        else break;
        
    }
    
    }
    return 0;
}