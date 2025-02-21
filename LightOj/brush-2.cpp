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
    ll n, ans=0,w, k, cou=1 ;
    cin >> n>> w;
    pair<ll,ll> a[n];
    for(ll i=0;i<n;i++){
        cin >> a[i].second >> a[i].first;
    }
    sort(a, a+n);
    k= a[0].first;
    for(ll i=0;i<n;i++){
        if(a[i].first - k >w){
            k= a[i].first;
            cou++;
        }
    }

    cout << "Case " << c<<": ";
    cout << cou << endl;
    
    }
    return 0;
}