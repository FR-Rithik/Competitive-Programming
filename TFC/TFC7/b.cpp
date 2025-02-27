#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define MOD 1000000007
using namespace std;
const int sz = 1e5+100;
vector<ll> grph[sz];
int main()
{
    ll n, m, k;
    cin >> n>> m>> k;
    while(k--){
        ll c, p;
        cin >> p>> c;
        grph[c].push_back(p);
    }
    for(ll i=1;i<=m;i++){
        ll cou=0;
        for(ll j=0;j+1<grph[i].size();j+=2){
            if((grph[i][j]-grph[i][j+1]) != 0) cou+= abs(grph[i][j]-grph[i][j+1]);
            else cou+= 100;
        }
        if(grph[i].size()%2) cou+= 100;

        cout << cou <<" ";
    }

    cout << endl;
 
    return 0;
}