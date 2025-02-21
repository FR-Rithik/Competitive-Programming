#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define MOD 1000000007
using namespace std;
int main()
{
    ll n, q, f=1;
    cin >> n;
    string a[n];
    
    for(ll i=0;i<n;i++) cin >> a[i];
    cin >> q;
    while(q--){
        ll m;
        cin >> m;
        ll ff=0;
        string chk[m];
        map<string , string> mp, mp2;
        
        for(ll i=0;i<n;i++) mp[a[i]] = "";
        for(ll i=0;i<m;i++){
          cin >> chk[i];  
          mp2[chk[i]]="";
        } 
        for(ll i=0;i+m<=n;i++){
            ll cou=0;
            f=1;
            ll u[30][30], v[30][30];
            memset(u, 0, sizeof(u));
            memset(v, 0, sizeof(v));
            for(ll j=0;j<m;j++){
                if(a[i+j]!=chk[j] && chk[j].size()>1) f=0;
                else if( a[i+j].size()==1){
                    u[a[i+j][0]-'a'][chk[j][0]-'a']=1;
                    v[chk[j][0]-'a'][a[i+j][0]-'a']=1;

                }
            }
                for(ll i=0;i<26;i++){
                    cou=0;
                    for(ll j=0;j<26;j++) cou+=u[i][j];
                    if(cou>1) f=0;
                }
                for(ll i=0;i<26;i++){
                    cou=0;
                    for(ll j=0;j<26;j++) cou+=v[i][j];
                    if(cou>1) f=0;
                }
            
            if(f) ff=1;
        }
        if(ff) cout <<"yes" << endl;
        else cout <<"no" << endl;
    }
 
    return 0;
}