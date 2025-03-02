#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define MOD 1000000007
using namespace std;
int main()
{
    ll n, ans=0;
    cin >> n;
    string a;
    cin >> a;
    map<string , ll > mp;
    for(ll i=0;i<n;i++){
        
        if(a[i]=='N'){
            mp["N"]++;
        }
        else if(a[i] == 'S'){
            mp["NS"]+= mp["N"];
            mp["NSUPS"]+= mp["NSUP"];
        }
        else if(a[i] == 'U'){
            mp["NSU"] += mp["NS"];
        }
        else if(a[i] == 'P'){
            mp["NSUP"] += mp["NSU"];
        }
        //else mp["NSUPS"]+= mp["NSUPS"];
       
    }

    cout << mp["NSUPS"] << endl;
 
    return 0;
}