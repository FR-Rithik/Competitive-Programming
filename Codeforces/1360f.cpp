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
    ll n, m, ff=0;
    cin >> n>> m;
    string a[n];
    for(ll i=0;i<n;i++) cin >> a[i];
    vector<string> st;
    st.push_back(a[0]);
    vector<ll> vld;
    for(ll i=0;i<m;i++){
        for(ll j=0;j<26;j++){
            if(a[0][i] != (char)('a' + j) ){
                string temp= a[0];
                temp[i] =(char)('a' + j);
                st.push_back(temp);
                vld.push_back(1);
            }
        }
    }
    for(ll i=1;i<n;i++){
        ll k=0;
        for(auto x: st){
        ll f=0;
         for(ll j=0;j<m;j++){
            if(a[i][j] != x[j]) f++;
         }  
         if(f>1) vld[k] = 0;
         k++; 
        }
    }
    for(ll i=0;i<st.size();i++){
        if(vld[i]){
            cout << st[i] << endl;
            ff=1;
            break;
        }  
    }
    if(!ff) cout << -1 << endl;

    
    }
    return 0;
}