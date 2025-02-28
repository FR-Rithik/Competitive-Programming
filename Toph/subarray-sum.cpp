#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define MOD 1000000007
using namespace std;
int main()
{
    fastio;
   ll t, c=0;
   cin >> t;
while(t-- && ++c){
    ll n, ans=-1e12, k;
    cin >> n>> k;
    ll a[n], b[n];
    for(ll i=0;i<n;i++) cin >> a[i];
    cout << "Case " << c<<": ";
    for(ll i=0;i<n;i++){
        ll sum=0, ngSum=0;
        multiset<ll> st;
        for(ll j=i;j<n;j++){
            if(a[j]>=0) sum+= a[j];
            else{
                if(k==0){
                    ngSum += a[j];
                }
                else if(st.size() < k) st.insert(a[j]);
                else{ 
                    auto it= st.end();
                    it--;
                    if(a[j] < *it){
                        ngSum+= *it;
                        st.erase(it);
                        st.insert(a[j]);
                    }
                    else ngSum+= a[j];
                }
            }
            ans= max(ans, sum+ ngSum);
        }
    }

    cout << ans << endl;
    }
    return 0;
}