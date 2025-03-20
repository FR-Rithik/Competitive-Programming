//AC
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
    ll ans =0, n, ttl=0, l =1 , r = n, sz=0;
    string a, temp;
    cin >> a;
    n = a.size();
    for(ll i=0;i<n;i++){
        if(a[i] == '0'){
            sz = n-i;
            break;
        }
    }
    if(sz == 0){
        cout << 1<<" " << n<<" "<< 1 <<" " << 1 << endl;
        continue;
    } 
    for(ll i=0;i+sz<=n;i++){
        string cmp;
        for(ll j=0;j<sz;j++){
            if(a[i+j]== a[n - sz + j]) cmp.push_back('0');
            else cmp.push_back('1');
        }
        if(cmp >= temp){
            temp= cmp;
            l = i+1, r = i+sz;
        }
    }

    cout << 1<<" " << n<<" "<< l <<" " << r << endl;
    
    }
    return 0;
}