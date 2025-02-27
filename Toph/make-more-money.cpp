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
    ll n, ans=-1e10,sm=0;
    cin >> n;
    vector<ll> a(n);
    set<ll> st;
    st.insert(0);
    for(ll i=0;i<n;i++){
        cin >> a[i];
        ans = max(ans, sm+ a[i]);
        ans = max(ans, a[i]+ sm*2- *(st.begin()--));
        sm+= a[i];
        st.insert(sm);

    }

    cout << ans << endl;
    
    }
    return 0;
}