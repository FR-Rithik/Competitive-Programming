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
    ll n, ans=0;
    cin >> n;
    map<ll,ll> mp1, mp2, mp3, mp4;
    while(n--){
        ll x, y;
        cin >> x>> y;
        ans+= mp1[x]+mp2[y]+ mp3[(y-x)]+ mp4[y+x];

        mp1[x]++, mp2[y]++, mp3[(y-x)]++, mp4[(y+x)]++;
        //cout << ans << endl;
    }

    cout << 2*ans << endl;
    
    }
    return 0;
}