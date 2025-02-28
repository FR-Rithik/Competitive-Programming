#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define ll __uint128_t
#define MOD 18446744073709551615
using namespace std;
const int sz = 1e4;
map<ll,ll> freq, vst;
long long int bi_ex(ll n){

    if(n==1) return 1;
    if(vst[n]) return freq[n];
    ll ans = (bi_ex(n/2)*bi_ex((n+1)/2))&MOD+1;
    if(n%2) ans++;

    vst[n]=1;
    return freq[n] = ans&MOD;
}
int main()
{
   int t, c=1;;
   cin >> t;
while(t--){
    int n;
    cin>> n;
    cout << "Case " << c<<": "<< bi_ex(n);
    cout << endl;

    c++;
    }
    return 0;
}