#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define MOD 1000000007
using namespace std;
const int sz = 1e4;
ll n, dw, k;
ll vst[sz], w[sz], l[sz];
ll ans[sz];
void dfs(ll node){
    if(vst[node]) return;
    vst[node] = 1;
    if(node%2)
    for(ll i=node+1;i<=n;i++){
        //cout << node <<" " << i<<" "<< w[node]<<" " << l[node]<<" "<< w[i]<<" "<< l[i] << " ";
        if(dw == i && dw >n/2){
            dw--;
        } 
        else if(w[node]){
            w[node]--;
            ans[k]= 1;
        }
        else {
            ans[k]= -1;
        }
        k++;
    }
    else
    for(ll i=n;i>node;i--){
        //cout << node <<" " << i<<" "<< w[node]<<" " << l[node]<<" "<< w[i]<<" "<< l[i] << " ";
        if(dw == i && dw >n/2){
            dw--;
        } 
        else if(w[node]){
            w[node]--;
            ans[k]= 1;
        }
        else {
            ans[k]= -1;
        }
        k++;
    }

    for(ll i= node;i<=n;i++) dfs(i);
}
int main()
{
   ll t;
   cin >> t;
while(t--){
    ans[0]= 0;
    cin >> n;
    k=1;
    memset(ans, 0 , (n+10)*ans[0]);
    dw= n*(1-n%2);
    memset(vst, 0, sizeof(vst));
    for(ll i=0;i<=n;i++) w[i]= (n-1)/2, l[i]= (n-1)/2;
    dfs(1);
    cout << endl;
    for(ll i=1;i<=n;i++) cout << ans[i] <<" ";
    cout << endl;
    }
    return 0;
}