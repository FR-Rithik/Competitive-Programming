#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define MOD 1000000007
using namespace std;

ll a, b, n, m;
struct arr{
    ll a[2][2];
};

map<ll, struct arr> mp;

struct arr prnt(struct arr x){
    for(ll i=0;i<2;i++){
        for(ll j=0;j<2;j++){
            cout << x.a[i][j] <<" ";
        }
        cout << endl;
    }
}

struct arr mul(struct arr x, struct arr y){
    struct arr r;
    for(ll i=0;i<2;i++){
        for(ll k=0;k<2;k++){
            r.a[i][k] = 0;
            for(ll j=0;j<2;j++){
                r.a[i][k] = (r.a[i][k] +(x.a[i][j]*y.a[k][j])%m)%m;
            }
        }
        
    }
    return  r;
}
struct arr dp(ll n){
    //cout << n << endl;
    struct arr x, r, y;
    
    x.a[0][0] = 1;
    x.a[0][1] = 1;
    x.a[1][0] = 1;
    x.a[1][1] = 0;
    
    if(n==1){
        return x;
    }
    if(n==2){
        return mul(dp(1),dp(1));
    }
    y= dp(n/2);
    if(n%2) r= mul(x, mul(y, y));
    else r= mul(y,y);

    return mp[n] = r;

}
int main()
{
   ll t, c=0;
   cin >> t;
while(t-- && ++c){
    struct arr x;
    cin  >> a>> b >> n>> m;
    m= pow(10,m);
    cout << "Case " << c<<": ";
    
    if(n==0) cout << a%m << endl;
    else if(n==1) cout << b%m << endl;
    else
    {
        x = dp(n-1);
        //prnt(x);
        cout <<((a*x.a[0][1])%m + (b*x.a[0][0])%m)%m << endl;
    }
    }
    return 0;
}