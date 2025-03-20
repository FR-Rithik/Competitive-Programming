//not ac
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define MOD 1000000007
using namespace std;
string grph[100];
string zr= "1111111111111111111111";

ll dp(string enb){
    string temp = enb;
    for(ll i=0;i<20;i++){
        if(enb[i] == '1'){
            temp[i] = '0';
         for(ll j=0;j<20;j++){
            if(grph[i][j] != temp[j]) temp[j] = '0';
            }   
        }

        dp(temp);
        
    }
}
int main()
{
   ll t;
   cin >> t;
while(t--){
    ll n;
    cin >> n;
    for(ll i=0;i<n;i++) grph[i]= zr;
    vector<ll> a[n];
    for(ll i=0;i<n;i++){
        ll m;
        cin >> m;
        while (m--)
        {
            ll x;
            cin >> x;
            a[i].push_back(x);
        }
        
    }
    for(ll i=0;i<n;i++){
        for(auto x: a[i]){
           for(ll j=i+1;j<n;j++){
            auto it = find(a[j].begin(), a[j].end(), x);

            if(it != a[j].end()) grph[i] ='0';
            } 
        }
        
    }
    
    }
    return 0;
}