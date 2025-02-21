#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define MOD 1000000007
using namespace std;

auto comp = []( const array<int, 2>& u, const array<int, 2>& v )
      { return u[1] < v[1]; };

int main()
{
   ll t;
   cin >> t;
while(t--){
    ll n, ans = 1e16;
    cin >> n;
    ll sum[n] = {0};
    pair<ll,ll> a[n];
    for(ll i=0;i<n;i++) cin >> a[i].first;
    for(ll i=0;i<n;i++) cin >> a[i].second;
    sort( a, a + n);
    sum[n-1] = a[n-1].second;
    for(ll i=n-2;i>=0;i--) sum[i] =sum[i+1] + a[i].second;
    ans = sum[0];
    for(ll i=0;i<n-1;i++){
        ans = min(ans, max(a[i].first, sum[i+1]));
    }
    cout << min(ans, a[n-1].first) << endl;
    
    }
    return 0;
}