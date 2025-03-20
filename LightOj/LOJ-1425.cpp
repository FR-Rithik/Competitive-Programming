// AC
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define MOD 1000000007
using namespace std;
int main()
{
   ll t, c=1;
   cin >> t;
while(t--){
    ll n, k, ans;
    cin >> n;
    vector<ll> a(n), diff;
    for(ll i=0;i<n;i++) cin >> a[i];
    diff.push_back(a[0]);
    for(ll i=1;i<n;i++){
        diff.push_back(a[i] - a[i-1]);
    }
    sort(diff.begin(), diff.end(), greater<ll>());
    k= diff[0];
    ans = k;
    for(auto x: diff){
        if(x>k){
            ans= diff[0]+1;
        }
        else if( x==k){
            k--;
        }
    }

    cout << "Case " << c++<<": ";
    cout << ans << endl;
    }
    return 0;
}