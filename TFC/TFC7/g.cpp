#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define MOD 1000000007
using namespace std;
int main()
{
    ll a, b, c, d, e, f, ans1=-1, ans2 =-1, wtr=-1;
    double dn=-1.0;
    cin >> a>> b>> c>> d>> e>> f;

    for(ll i=0;i<=50;i++){
        for(ll j=0;j<=50;j++){
            ll k= e*(i*a+ j*b), mx=-1;
            if(i || j){
                for(ll n=0;n<=3000;n++){
                    ll m = (k-n*c)/d;
                    if(n*c + m*d <= k){
                        mx = max(mx, n*c + m*d);
                        
                    }
                }
                //double dn2= (1.0*mx)/(1.0*((i*a+ j*b)));
                //cout << i<<" "<<j<<" " << k << endl;
                if( (mx>0) &&( mx + 100*(i*a+j*b))  <=f){
                    if(ans1<0 || (wtr * mx > (100*(i*a+j*b))*ans1))
                    ans1 = mx, ans2= mx+100*(i*a+j*b), wtr=100*(i*a+j*b) ;
                }
            }    
            
        }
    }
    if(ans1 <0) cout << 100*a<<" " << 0 << endl;
    else 
    cout << ans2 <<" " << ans1 << endl;
 
    return 0;
}