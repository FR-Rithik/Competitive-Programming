#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define MOD 1000000007
using namespace std;
const int sz = 1e3;
ll n, x1, x2, ys, y2;
ll memo[sz][sz], pth[sz][sz];

ll dp(ll i, ll j){
    if(i==0) i= 16;
    if(i==17) i=1;
    if(j==0) j=20;
    if(j==21) j=1;

    //cout << i <<" " << j << endl;

    if(i==x2 && j==y2) return 0;
    if(memo[i][j] != -1) return memo[i][j];
    if(pth[i][j]) return 1e10;
    pth[i][j] = 1;
    if(memo[i][j]!=-1) return memo[i][j];

    ll ans1= 1e10, ans2= 1e10, ans3 = 1e10, ans4 = 1e10;

    if(i!=x2){
       ans1 = min(ans1 , dp(i+1, j)) ;
       ans2 = min(ans2 , dp(i-1,j )) ;
       ans1 = min(ans1, ans2);

    }
    if(j!=y2){
       ans3 = min(ans3, dp(i, j+1));
       ans4 = min(ans4,dp(i, j-1)) ;   
       ans3 =  min(ans3, ans4);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   
    }

    ans1= min(ans1, ans3);
    ans1++;

    pth[i][j]=0;
    
    return memo[i][j]= ans1;
}
int main()
{
   ll t;
   cin >> t;
while(t--){

   memset(memo, -1, sizeof(memo));
   memset(pth, 0, sizeof(pth));
    
    cin >> x1>> ys>> x2>> y2;

    cout << dp(x1, ys) << endl;
    
    }
    return 0;
}